class Solution {
public:
    int ans = INT_MIN;
    vector<int> row = {0, -1, 0, 1};
    vector<int> col = {-1, 0, 1, 0};
    vector<vector<int>> dp; 

    int func(int i, int j, vector<vector<int>>& matrix) {
        if (dp[i][j] != -1) return dp[i][j];  

        int n = matrix.size(), m = matrix[0].size();
        int val = matrix[i][j];
        int best = 1; 

        for (int k = 0; k < 4; k++) {
            int rw = i + row[k];
            int cw = j + col[k];
            if (rw >= 0 && rw < n && cw >= 0 && cw < m &&
                matrix[rw][cw] > val) {
                best = max(best, 1 + func(rw, cw, matrix));
            }
        }
        return dp[i][j] = best;
    }

    int longestIncreasingPath(vector<vector<int>>& matrix) {
        int n = matrix.size(), m = matrix[0].size();
        dp.assign(n, vector<int>(m, -1));

        ans = 1;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                ans = max(ans, func(i, j, matrix));
            }
        }
        return ans;
    }
};
