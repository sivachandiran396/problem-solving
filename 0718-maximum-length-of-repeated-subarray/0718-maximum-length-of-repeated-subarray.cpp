class Solution {
public:
    int findLength(vector<int>& nums1, vector<int>& nums2) {
        string s(nums1.begin(),nums1.end());
        string str(nums2.begin(),nums2.end());
        int n =nums1.size(),m=nums2.size();
        vector<vector<int>> dp(n+1,vector<int>(m+1,0));
        int max=0;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(s[i-1]==str[j-1]){
                    dp[i][j]=dp[i-1][j-1]+1;
                    if(dp[i][j]>max){
                        max=dp[i][j];
                    }
                }
            }
        }
        return max;
    }
};