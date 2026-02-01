// Last updated: 01/02/2026, 21:17:08
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int pro = 1;
    int zeroCount = 0;

    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] == 0) {
            zeroCount++;
            continue;
        }
        pro *= nums[i];
    }

    vector<int> ans;

    for (int i = 0; i < nums.size(); i++) {
        if (zeroCount > 1) {
            ans.push_back(0);
        } else if (zeroCount == 1 && nums[i] == 0) {
            ans.push_back(pro);
        } else if (zeroCount == 0) {
            ans.push_back(pro / nums[i]);
        } else {
            ans.push_back(0);
        }
    }

    return ans;
    }
};