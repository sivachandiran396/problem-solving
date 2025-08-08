class Solution {
public:
    bool func(int ind1, int ind2, int ind3, const string& s1, const string& s2,
              const string& str,vector<vector<int>> &dp) {
        if (ind3 == str.size()) {
            return true;
        }
        if(dp[ind1][ind2]!=-1) return dp[ind1][ind2];
        bool takeFromS1 = (ind1 < s1.size() && s1[ind1] == str[ind3]);
        bool takeFromS2 = (ind2 < s2.size() && s2[ind2] == str[ind3]);
        if (takeFromS1) {
            if (func(ind1 + 1, ind2, ind3 + 1, s1, s2, str,dp)) {
                dp[ind1][ind2]=1;
                return true;
            }
        }
        if (takeFromS2) {
            if (func(ind1, ind2 + 1, ind3 + 1, s1, s2, str,dp)) {
                dp[ind1][ind2]=1;
                return true;
            }
        }
        dp[ind1][ind2]=0;
        return false;
    }

    bool isInterleave(string s1, string s2, string s3) {
        if (s1.size() + s2.size() != s3.size()) {
            return false;
        }
    vector<vector<int>> dp(s1.size()+1,vector<int>(s2.size()+1,-1));
        return func(0, 0, 0, s1, s2, s3,dp);
    }
};
