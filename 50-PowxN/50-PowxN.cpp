// Last updated: 01/02/2026, 21:18:10
class Solution {
public:
    double myPow(double x, int n) {
        if(n==INT_MAX)
        return x==1 ? 1 : x==-1 ? -1 : 0;
        if(n==INT_MIN)
        return x==1 || x==-1 ? 1 : 0;
        double ans=1;
        if(n<0){
            n=-n;
            ans=Pow(x,n);
            ans=1.0/ans;
        }
        else{
            ans=Pow(x,n);
        }
        return ans;
    }

    double Pow(double x, int n){
        if (n == 0)
            return 1.0;

        double half = Pow(x, n / 2);

        if (n % 2 == 0)
            return half * half;
        else
            return half * half * x;
    }
};