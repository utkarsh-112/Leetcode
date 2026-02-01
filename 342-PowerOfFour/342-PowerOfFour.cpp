// Last updated: 01/02/2026, 22:13:33
class Solution {
public:
    bool isPowerOfFour(int n) {
        if (n == 1) return true;

        // Base case 2: invalid cases
        if (n <= 0 || n % 4 != 0) return false;

        // Recursive call
        return isPowerOfFour(n / 4);
    }
};