// Last updated: 01/02/2026, 21:16:25
class Solution {
public:
    int countOdds(int low, int high) {
        if(high%2==0 && low%2==0)
            return (high-low)/2;
        else 
            return (high-low)/2+1;
    }
};