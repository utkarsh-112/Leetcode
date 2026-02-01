// Last updated: 01/02/2026, 21:17:21
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int> temp(n);
        for(int i=0;i<nums.size();i++){
            temp[(i+k)%n]=nums[i];
        }
        nums=temp;
    }
};