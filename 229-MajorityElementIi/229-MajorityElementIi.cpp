// Last updated: 01/02/2026, 21:17:14
class Solution {
public:
    vector<int> majorityElement(vector<int>& a) {
        unordered_map<int,int> m;
        int max=0;
        for(int i=0;i<a.size();i++){
            m[a[i]]++;
        }
        vector<int> res;
        int c=a.size()/3;
        unordered_map<int,int> :: iterator it;
        for(it=m.begin();it!=m.end();it++){
            if(it->second>c)
                res.push_back(it->first);
    }
    return res;
    }
};