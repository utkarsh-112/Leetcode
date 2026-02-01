// Last updated: 01/02/2026, 21:18:17
class Solution {
public:
    void solve(vector<int> num,int target, int ind,vector<vector<int>> &ans,vector<int> &ds){
        if(target==0){
            ans.push_back(ds);
            return;
        }
        if(ind>=num.size())
            return;

        for(int i=ind;i<num.size();i++){
            if(i > ind && num[i]==num[i-1]) continue;
            if(num[ind] > target) break;
            ds.push_back(num[i]);
            solve(num,target-num[i],i+1,ans,ds);
            ds.pop_back();
        }
        
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> ds;
        sort(candidates.begin(),candidates.end());
        solve(candidates,target,0,ans,ds);
        return ans;
    }
};