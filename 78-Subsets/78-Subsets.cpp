// Last updated: 01/02/2026, 21:17:53
class Solution {
public:
    void solve(vector<int> &nums,vector<int> &output,int ind, vector<vector<int>> &ans){
        if(ind>=nums.size()){
            ans.push_back(output);
            return;
        }

        //exclude
        solve(nums,output,ind+1,ans);

        //include
        output.push_back(nums[ind]);
        solve(nums,output,ind+1,ans);
        output.pop_back();
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> output;
        solve(nums,output,0,ans);
        return ans;
    }
};