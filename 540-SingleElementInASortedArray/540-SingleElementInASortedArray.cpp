// Last updated: 01/02/2026, 21:16:45
class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int low=0;
        int high=nums.size()-1;

        while(low<high){
            int mid=(low+high)/2;

            if(mid%2==1) mid--;
            if(nums[mid+1]==nums[mid]) low=mid+2;
            else high=mid;
        }
        return nums[low];
    }
};