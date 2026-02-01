// Last updated: 01/02/2026, 21:18:53
class Solution {
public:
    string longestPalindrome(string s) {
        int n=s.size();
        if(n<2) return s;
        int len=0;
        int maxlen=1;
        int start=0;

        auto expand=[&](int left,int right){
            while(left>=0 && right<n && s[left]==s[right]){
                left--;
                right++;
            }
            len=right-left-1;
            if(len>maxlen){
                maxlen=len;
                start=left+1;
            }
        };

        for(int i=0;i<n;i++){
            expand(i,i);
            expand(i,i+1);
        }

        return s.substr(start,maxlen);
    }
};