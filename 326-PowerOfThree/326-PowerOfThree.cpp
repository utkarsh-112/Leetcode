// Last updated: 01/02/2026, 23:04:30
class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n==1)
        return true;;
        if(n<=0 || n%3!=0)
        return false;

        return isPowerOfThree(n/3);
    }
};