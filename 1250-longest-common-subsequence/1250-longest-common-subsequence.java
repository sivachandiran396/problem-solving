class Solution {
    public int f(int ind1,int ind2,String str1,String str2,int[][] dp){
        if(ind1< 0 || ind2 < 0) return 0;
        if(dp[ind1][ind2]!=-1) return dp[ind1][ind2];
        if(str1.charAt(ind1)==str2.charAt(ind2)){
            return dp[ind1][ind2]= 1+f(ind1-1,ind2-1,str1,str2,dp);
        }
        return dp[ind1][ind2]=Math.max(f(ind1-1,ind2,str1,str2,dp),f(ind1,ind2-1,str1,str2,dp));
    }
    public int longestCommonSubsequence(String text1, String text2) {
        int n1=text1.length(),n2=text2.length();
                int[][] dp=new int[n1][n2];
                for(int i=0;i<n1;i++){
                    for(int j=0;j<n2;j++){
                        dp[i][j]=-1;
                    }
                }
        return f(n1-1,n2-1,text1,text2,dp);
    }
}