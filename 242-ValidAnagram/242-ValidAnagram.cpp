// Last updated: 01/02/2026, 21:17:05
class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());

        if(s==t)
        return true;
        return false;
    }
};