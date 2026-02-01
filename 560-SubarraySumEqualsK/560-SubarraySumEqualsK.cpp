// Last updated: 01/02/2026, 21:16:44
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int ans=0;
        int sum=0;
        unordered_map<int,int> mpp;
        mpp[sum]=1;
        for(auto it:nums){
            sum+=it;
            int find=sum-k;
            if(mpp.find(find)!=mpp.end())
            ans+=mpp[find];

            mpp[sum]++;
        }
        return ans;
    }
};