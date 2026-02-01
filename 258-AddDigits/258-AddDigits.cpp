// Last updated: 01/02/2026, 21:17:04
class Solution {
public:
    int addDigits(int num) {
        int sum = 0;
        while (num > 9)
        {
            while (num)
            {
                sum += (num % 10);
                num /= 10;
            }
            num = sum;
            sum = 0;
        }
        return num;
    }
};