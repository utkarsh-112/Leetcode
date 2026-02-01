// Last updated: 01/02/2026, 21:18:57
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        unordered_map<int,int> mpp;
        for(int i=0;i<nums.size();i++){
            int res=target-nums[i];
            if(mpp.find(res)!=mpp.end()){
                ans.push_back(mpp[res]);
                ans.push_back(i);
            }
            else{
                mpp[nums[i]]=i;
            }
        }
        return ans;
    }
};