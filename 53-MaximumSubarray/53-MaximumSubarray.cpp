// Last updated: 01/02/2026, 21:18:08
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0;
        int maxi=INT_MIN;
        for(auto i:nums){
            sum+=i;
            maxi=max(sum,maxi);
            if(sum<0)
            sum=0;
        }

        return maxi;
    }
};