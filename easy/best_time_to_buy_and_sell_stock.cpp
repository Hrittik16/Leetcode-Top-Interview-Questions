class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size() <= 0) return 0;
        long long int mn, profit = 0;
        mn = prices[0];
        for(int i = 1; i < prices.size(); i++) {
            if(prices[i] < mn) {
                mn = prices[i];
            }
            else profit = max(profit, abs(mn-prices[i]));
        }
        return profit;
    }
};