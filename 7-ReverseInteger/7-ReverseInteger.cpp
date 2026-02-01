// Last updated: 01/02/2026, 21:18:52
class Solution {
public:
    int reverse(int x) {
        int num=x;
        int rem;
        int res=0;
        while(num){
            rem=num%10;
            num=num/10;
            if (res > INT_MAX / 10 || (res == INT_MAX / 10 && rem > 7))
                return 0;
            if (res < INT_MIN / 10 || (res == INT_MIN / 10 && rem < -8))
                return 0;
            res=res*10+rem;
        }
        return res;
    }
};