// Last updated: 01/02/2026, 21:18:24
class Solution {
public:
    int searchInsert(vector<int>& nums, int t) {
        int n=nums.size();
        int l=0;
        int r=n-1;
        int mid=(l+r)/2;
        while(l<=r)
        {
            if(nums[mid]==t)
            {
                return mid;
            }
            if(nums[mid]>t)
            {
                r=mid-1;
                mid=(l+r)/2;
            }
            if(nums[mid]<t)
            {
                l=mid+1;
                mid=(l+r)/2;
            }
        }
        if(t>nums[mid])
        {
            return mid+1;
        }
        else
        {
            if(mid==0)
            {
                return 0;
            }
            else
            {
                return mid-1;
            }
            
        }
    }
};