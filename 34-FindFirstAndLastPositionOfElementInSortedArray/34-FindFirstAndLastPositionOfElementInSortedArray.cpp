// Last updated: 01/02/2026, 21:18:25
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> v;
        int s=0;
        int e=nums.size()-1;
        int mid=(s+e)/2;
        int ans=-1;
        while(s<=e){
            if(nums[mid]==target){
                ans=mid;
                e=mid-1;
            }else if(nums[mid]<target){
                s=mid+1;
            }else{
                e=mid-1;
            }
            mid=(s+e)/2;
        }
        v.push_back(ans);
        s=0;
        e=nums.size()-1;
        mid=(s+e)/2;
        while(s<=e){
            if(nums[mid]==target){
                ans=mid;
                s=mid+1;
            }else if(nums[mid]<target){
                s=mid+1;
            }else{
                e=mid-1;
            }
            mid=(s+e)/2;
        }
        v.push_back(ans);
        return v;
    }
};