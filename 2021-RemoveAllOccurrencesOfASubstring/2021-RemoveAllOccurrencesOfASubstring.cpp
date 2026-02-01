// Last updated: 01/02/2026, 21:16:26
class Solution {
public:
    string removeOccurrences(string s, string part) {
        while(s.length()!=0 && s.find(part)<s.length())
            s.erase(s.find(part),part.length());
        return s;
    }
};