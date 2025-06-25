class Solution {
    public int minFallingPathSum(int[][] matrix) {
        int n = matrix.length;
        int[][] dp = new int[n][n];
        for (int i = 0; i < n; i++) {
            dp[n - 1][i] = matrix[n - 1][i];
        }
        for (int i = n - 2; i >= 0; i--) {
            for (int j = 0; j < n; j++) {
                int s = dp[i + 1][j];
                int l = j > 0 ? dp[i + 1][j - 1] : Integer.MAX_VALUE;
                int r = j < n - 1 ? dp[i + 1][j + 1] : Integer.MAX_VALUE;
                dp[i][j] = matrix[i][j] + Math.min(Math.min(r, s), l);
            }
        }
        int mini = Integer.MAX_VALUE;
        for (int i = 0; i < n; i++) {
            if (dp[0][i] < mini)
                mini = dp[0][i];
        }
        return mini;
    }
}