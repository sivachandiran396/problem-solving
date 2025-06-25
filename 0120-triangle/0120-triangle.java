class Solution {
    public int fun(int i,int j,int n,List<List<Integer>> tri,int[][] dp){
        if(i==n-1){
            return dp[i][j]= tri.get(i).get(j);
        }
        if(dp[i][j]!=-1) return dp[i][j];
        int d=fun(i+1,j,n,tri,dp);
        int di=fun(i+1,j+1,n,tri,dp);
        return dp[i][j]=tri.get(i).get(j)+Math.min(d,di);
    }
    public int minimumTotal(List<List<Integer>> triangle) {
        int n=triangle.size();
        int[][] dp=new int[n][n];
         for (int i = 0; i < n; i++) {
            Arrays.fill(dp[i], -1);
        }
       return fun(0,0,triangle.size(),triangle,dp);
    }
}