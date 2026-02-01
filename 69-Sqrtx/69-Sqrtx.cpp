// Last updated: 01/02/2026, 21:18:00
class Solution {
public:
    long long int binarySearch(int x){
        int s=0;
        int e=x;
        long long int mid=(s+e)/2;
        long long int ans=-1;
        while(s<=e){
            long long int square=mid*mid;
            if(mid*mid==x)
                return mid;
            if(square<x){
                ans=mid;
                s=mid+1;
            }
            else
                e=mid-1;  
            mid=(s+e)/2;
        }
        return ans;
    }
    int mySqrt(int x) {
        return binarySearch(x);
    }
};