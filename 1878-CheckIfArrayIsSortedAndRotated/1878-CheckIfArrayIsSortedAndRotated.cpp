// Last updated: 01/02/2026, 21:16:28
class Solution {
public:
    bool check(vector<int>& nums) {
        int count=0;
        int n=nums.size();
        for(int i=1;i<n;i++){
            if(nums[i-1]>nums[i])
                count++;
        }
        if(nums[n-1]>nums[0])
            count++;
        return count<=1;
    }
};