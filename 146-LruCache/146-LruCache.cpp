// Last updated: 01/02/2026, 21:17:31
class LRUCache {
private:
    int cap;
    list<pair<int,int>> lruList;  // key-value pairs
    unordered_map<int, list<pair<int,int>>::iterator> mp;

public:
    LRUCache(int capacity) {
        cap = capacity;
    }
    
    int get(int key) {
        // If not present
        if (mp.find(key) == mp.end())
            return -1;

        // Move accessed node to front
        auto it = mp[key];
        int val = it->second;
        lruList.erase(it);            // remove from current pos
        lruList.push_front({key, val}); // insert at front
        mp[key] = lruList.begin();      // update map

        return val;
    }
    
    void put(int key, int value) {
        // If key exists, remove old
        if (mp.find(key) != mp.end()) {
            auto it = mp[key];
            lruList.erase(it);
            mp.erase(key);
        }
        
        // If full, remove least recently used
        if (lruList.size() == cap) {
            auto last = lruList.back();
            mp.erase(last.first);      // remove key from map
            lruList.pop_back();        // remove from list
        }
        
        // Insert new at front
        lruList.push_front({key, value});
        mp[key] = lruList.begin();
    }
};
