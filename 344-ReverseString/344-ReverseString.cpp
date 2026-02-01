// Last updated: 01/02/2026, 21:16:56
class Solution {
public:
    void reverseString(vector<char>& s) {
        int j=s.size()-1,i=0;
        while(i<j){
            swap(s[i],s[j]);
            i++;
            j--;
        }
    }
};