// Last updated: 01/02/2026, 21:17:16
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> mpp;
        for(auto i:nums){
            mpp[i]++;
        }
        for(auto i:mpp){
            if(i.second>1)
            return true;
        }
        return false;
    }
};