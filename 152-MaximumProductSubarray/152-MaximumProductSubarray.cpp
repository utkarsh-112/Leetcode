// Last updated: 01/02/2026, 21:17:28
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxi1=INT_MIN;
        int prod=1;
        for(auto i:nums){
            prod*=i;
            maxi1=max(prod,maxi1);
            if(prod==0)
            prod=1;
        }
        prod=1;
        int maxi2=INT_MIN;
        for(int i=nums.size()-1;i>=0;i--){
            prod*=nums[i];
            maxi2=max(prod,maxi2);
            if(prod==0)
            prod=1;
        }
        if(maxi1>maxi2)
        return maxi1;
        else
        return maxi2;
    }
};