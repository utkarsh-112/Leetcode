// Last updated: 01/02/2026, 21:16:42
class Solution {
public:
    int repeatedStringMatch(string a, string b) {
        int n=a.size();
        int m=b.size();
        string temp="";
        int count=0;

        while(temp.size()<m){
            temp+=a;
            count++;
        }

        if(temp.find(b)!=string::npos) return count;
        if((temp+a).find(b)!=string::npos) return count+1;
        return -1;
    }
};