// Last updated: 01/02/2026, 21:16:29
class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans="";
        int i=0,j=0;
        while(i<word1.length() || i<word2.length()){
            if(i<word1.length())
            ans.push_back(word1[i]);
            if(i<word2.length())
            ans.push_back(word2[i]);
            i++;
        }
        return ans;
    }
};