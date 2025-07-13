class Solution {
public:
    string longestPalindrome(string s) {
        int n=s.size();
        string ans=s;
        reverse(ans.begin(),ans.end());
        vector<vector<int>> dp(n+1,vector<int> (n+1,0));
        int end=0,maxlen=0;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(s[i-1]==ans[j-1]){
                    dp[i][j]=1+dp[i-1][j-1];
                    if(dp[i][j]>maxlen && (i - dp[i][j]) == (n - j)){
                        maxlen=dp[i][j];
                         end=i;
                    }
                }
            }
        }
        string str=s.substr(end-maxlen,maxlen);
        return str;
    }
};