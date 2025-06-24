class Solution {
    public int minPathSum(int[][] grid) {
        int n=grid.length;
        int m=grid[0].length;
        int[][] dp=new int[n][m];
        for(int i=0;i<n;i++){
            for(int  j=0;j<m;j++){
                if(i==0 &&j==0) dp[0][0]=grid[0][0];
                else{
                    int up=Integer.MAX_VALUE,left=Integer.MAX_VALUE;
                if(i>0) up=dp[i-1][j];
                if(j>0) left=dp[i][j-1];
                dp[i][j]=Math.min(left,up)+grid[i][j];
                }
            }
        }
        return dp[n-1][m-1];
    }
}