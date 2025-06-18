class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        if (n == 0) return 0;

        vector<vector<int>> dp(3, vector<int>(n, 0));
        
        for (int i = 1; i <= 2; ++i) {
            int maxdiff = -prices[0]; 
            for (int j = 1; j < n; ++j) {
                dp[i][j] = max(dp[i][j - 1], prices[j] + maxdiff);
                maxdiff = max(maxdiff, dp[i - 1][j] - prices[j]);
            }
        }
        
        return dp[2][n - 1];
    }
};
