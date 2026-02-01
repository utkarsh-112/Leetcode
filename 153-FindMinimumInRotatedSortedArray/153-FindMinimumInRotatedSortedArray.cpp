// Last updated: 01/02/2026, 21:17:26
class Solution {
public:
    int findMin(vector<int>& nums) {
        int start=0;
        int end=nums.size()-1;
        int ans=INT_MAX;
        while(start<=end){
            int mid=(start+end)/2;

            if(nums[start]<=nums[end]){
                ans=min(nums[start],ans);
                break;
            }

            if(nums[mid]>=nums[start]){
                ans=min(nums[start],ans);
                start=mid+1;
            }
            else{
                end=mid-1;
                ans=min(nums[mid],ans);
            }
        }
        return ans;
    }
};