class Solution {
public:
    Solution() {
        ios::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
    }
    int maxProfit(vector<int>& prices) {
        if(prices.size() <= 1)
            return 0;
        int max_profit = 0;
        for(int i = 1; i < prices.size(); i++) {
            if(prices[i-1] < prices[i])
                max_profit += prices[i]-prices[i-1];
        }
        return max_profit;
    }
};