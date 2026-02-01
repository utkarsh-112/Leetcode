// Last updated: 01/02/2026, 21:16:31
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> umap;
        unordered_set<int> s;
        for(int i=0;i<arr.size();i++)
        {
        umap[arr[i]]++;
        }
        for(auto x:umap)
        {
        s.insert(x.second);
        }
        if(s.size()==umap.size())
        return true;
        return false;
    }
};