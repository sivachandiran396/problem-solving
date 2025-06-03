class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>> dp(n,vector<int> (m,0));
        dp[0][0]=grid[0][0];
        for(int i=1;i<m;i++){
            dp[0][i]=grid[0][i]+dp[0][i-1];
        }
         for(int i=1;i<n;i++){
            dp[i][0]=grid[i][0]+dp[i-1][0];
        }
        for(int j=1;j<n;j++){
            for(int k=1;k<m;k++){
                dp[j][k]=grid[j][k]+min(dp[j][k-1],dp[j-1][k]);
            }
        }
        return dp[n-1][m-1];
    }
};