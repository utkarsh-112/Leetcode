// Last updated: 01/02/2026, 21:16:49
class LFUCache {
public:
    // Node storing key, value, and its freq
    struct Node {
        int key;
        int value;
        int freq;

        Node(int k, int v, int f) {
            key = k;
            value = v;
            freq = f;
        }
    };

    int capacity;
    int minFreq;

    // key → iterator to node inside freqList[freq]
    unordered_map<int, list<Node>::iterator> keyNode;

    // freq → list of nodes having that freq
    unordered_map<int, list<Node>> freqList;

    LFUCache(int capacity) {
        this->capacity = capacity;
        this->minFreq = 0;
    }

    int get(int key) {
        if (!keyNode.count(key)) 
            return -1;

        auto it = keyNode[key];
        int val = it->value;
        int freq = it->freq;

        // Remove from old frequency list
        freqList[freq].erase(it);

        // If old frequency list becomes empty
        if (freqList[freq].empty()) {
            freqList.erase(freq);
            if (minFreq == freq)
                minFreq++;   // increase minFreq
        }

        // Insert into new frequency list (freq+1)
        freqList[freq + 1].push_front(Node(key, val, freq + 1));
        keyNode[key] = freqList[freq + 1].begin();

        return val;
    }

    void put(int key, int value) {
        if (capacity == 0)
            return;

        // If key already exists → update value + freq
        if (keyNode.count(key)) {
            keyNode[key]->value = value;
            get(key); // reuse get() to update frequency
            return;
        }

        // If cache full → remove LFU node
        if (keyNode.size() == capacity) {
            // least freq list's last node is LRU in that freq
            auto it = freqList[minFreq].back();
            keyNode.erase(it.key);
            freqList[minFreq].pop_back();

            if (freqList[minFreq].empty())
                freqList.erase(minFreq);
        }

        // Insert new node with freq = 1
        freqList[1].push_front(Node(key, value, 1));
        keyNode[key] = freqList[1].begin();
        minFreq = 1;
    }
};
