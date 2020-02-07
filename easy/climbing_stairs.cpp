vector<int> dp(1e6, -1);
class Solution {
public:
    int climbStairs(int n) {
        if(n <= 1) dp[n] = 1;
        if(dp[n] != -1)
            return dp[n];
        dp[n] = climbStairs(n-1)+climbStairs(n-2);
        return dp[n];
    }
};