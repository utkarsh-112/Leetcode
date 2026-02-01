// Last updated: 01/02/2026, 21:17:03
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int sumT = (n*(n+1))/2;
        int sum = 0;
        for(auto i:nums){
            sum+=i;
        }
        return sumT-sum;
    }
};