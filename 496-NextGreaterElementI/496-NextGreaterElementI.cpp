// Last updated: 01/02/2026, 21:16:47
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& num1, vector<int>& num2) {
        unordered_map<int,int> mpp;
        stack<int> s;
        for(int i=num2.size()-1;i>=0;i--){
            while(!s.empty() && s.top()<=num2[i])
            s.pop();

            mpp[num2[i]]=s.empty() ? -1 : s.top();
            s.push(num2[i]);
        }

        vector<int> res;
        for(auto num:num1){
            res.push_back(mpp[num]);
        }
        return res;
    }
};