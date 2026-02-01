// Last updated: 01/02/2026, 21:17:01
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
       for(int i = 0, index = 0; i < nums.size(); i++) {
            if(nums[i]) {
                swap(nums[i], nums[index]);
                index++;
            }
        }
    }
};