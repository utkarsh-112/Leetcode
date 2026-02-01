// Last updated: 01/02/2026, 21:16:40
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int start=0;
        int end=n-1;
        int mid=(start+end)/2;

        while(start<=end){
            int ele=nums[mid];

            if(target==ele)
            return mid;

            else if(target>ele)
            start=mid+1;
            else
            end=mid-1;

            mid=(start+end)/2;
        }
        return -1;
    }
};