// Last updated: 01/02/2026, 21:18:55
class Solution {
public:
    int lengthOfLongestSubstring(string str) {
        unordered_set<char> charSet;
        int maxLen=0;
        int left=0;

        for(int right=0;right<str.length();right++){
            while(charSet.find(str[right])!=charSet.end()){
                charSet.erase(str[left]);
                left++;
            }

            charSet.insert(str[right]);
            maxLen=max(right-left+1,maxLen);
        }
        return maxLen;
}
};