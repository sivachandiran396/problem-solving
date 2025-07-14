class Solution {
public:
    int minDistance(string s, string str) {
         int n=s.size();
         int m=str.size();
         if(s==str) return 0;
        vector<vector<int>> dp(n+1,vector<int> (m+1,0));
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(s[i-1]==str[j-1]){
                    dp[i][j]=1+dp[i-1][j-1];
                }else{
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
        int del=n-dp[n][m];
        int in=m-dp[n][m];
        return del+in;
    }
};