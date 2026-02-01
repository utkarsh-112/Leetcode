// Last updated: 01/02/2026, 21:18:36
class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(char c:s){
            if(!st.empty()){
                char last=st.top();
                if(isPair(c,last)){
                    st.pop();
                    continue;
                }
            }
            st.push(c);
        }
        return st.empty();
    }
    bool isPair(char cur, char last){
        return (last=='(' && cur==')') ||
                (last=='[' && cur==']') ||
                (last=='{' && cur=='}');
    }
};