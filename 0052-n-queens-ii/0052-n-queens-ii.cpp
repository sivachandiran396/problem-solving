class Solution {
public:
 bool check(int row, int col, vector<string>& vec, int n) {
        int dc = col;
        int dr = row;
        while (row >= 0 && col >= 0) {
            if (vec[row][col] == 'Q')
                return false;
            row--;
            col--;
        }
        col = dc;
        while (col >= 0) {
            if (vec[dr][col] == 'Q')
                return false;
            col--;
        }
        row = dr;
        col = dc;
        while (row < n && col >= 0) {
            if (vec[row][col] == 'Q')
                return false;
            row++;
            col--;
        }
        return true;
    }
    void solve(int col, vector<vector<string>>& ans, vector<string>& vec,
               int n) {
        if (col == n) {
            ans.push_back(vec);
            return;
        }
        for (int r = 0; r < n; r++) {
            if (check(r, col, vec, n)) {
                vec[r][col] = 'Q';
                solve(col + 1, ans, vec, n);
                vec[r][col] = '.';
            }
        }
    }
    int totalNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> vec(n);
        string str(n, '.');
        for (int i = 0; i < n; i++) {
            vec[i] = str;
        }
        solve(0, ans, vec, n);
        return ans.size();
    }
};