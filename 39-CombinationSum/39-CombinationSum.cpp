// Last updated: 01/02/2026, 21:18:19
class Solution {
public:
    void solve(int ind,vector<vector<int>> &ans,vector<int> &ds, vector<int> num, int target){
        if(ind==num.size()){
            if(target==0){
                ans.push_back(ds);
            }
            return;
        }

        //pick
        if(num[ind]<=target){
            ds.push_back(num[ind]);
            solve(ind,ans,ds,num,target-num[ind]);
            ds.pop_back();
        }

        solve(ind+1,ans,ds,num,target);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> ds;
        solve(0,ans,ds,candidates,target);
        return ans;
    }
};