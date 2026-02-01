// Last updated: 01/02/2026, 21:16:48
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0;
        int maxi=INT_MIN;
        for(auto i:nums){
            if(i==1){
                count++;
                maxi=max(count,maxi);
            }
            else
            count=0;
        }
        if(maxi<1)
            return 0;
        return maxi;
    }
};