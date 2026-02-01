// Last updated: 01/02/2026, 21:17:20
class Solution {
public:
    int countPrimes(int n) {
        int cnt=0;
        vector<bool> prime(n+1,true);
        prime[0]=prime[1]=false; //0 and 1 non prime numbers
        for(int i=2;i<n;i++){
            if(prime[i]){
                cnt++;
                for(int j=2*i;j<n;j=j+i)
                    prime[j]=false;
            }
        }
        return cnt;
    }
};