// Last updated: 01/02/2026, 21:16:52
class Solution {
public:
    int compress(vector<char>& chars) {
        int i=0;
        int n=chars.size();
        int ansIndex=0;
        while(i<n){
            int j=i+1;
            while(j<n && chars[i]==chars[j])
                j++;
            
            chars[ansIndex++]=chars[i];
            int count=j-i;
            if(count>1){
                string ct=to_string(count);
                for(auto i:ct){
                    chars[ansIndex++]=i;
                }
            }
            i=j;
        }
        return ansIndex;
    }
};