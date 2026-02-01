// Last updated: 01/02/2026, 21:16:24
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans(n,0);
        int posIndex=0;
        int negIndex=1;
        for(auto i: nums){
            if(i>0){
                ans[posIndex]=i;
                posIndex+=2;
            }
            if(i<0){
                ans[negIndex]=i;
                negIndex+=2;
            }
        }
        return ans;
    }
};