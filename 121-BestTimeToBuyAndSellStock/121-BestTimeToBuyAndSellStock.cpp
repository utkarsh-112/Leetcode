// Last updated: 01/02/2026, 21:17:41
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0;
        int buy=prices[0];

        for(auto i:prices){
            if(buy > i)
            buy=i;
            else if(i-buy > profit)
            profit=i-buy;
        }

        return profit;
    }
};