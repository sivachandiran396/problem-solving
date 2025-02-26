class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        queue<pair<int, int>> q;
        int f = 0;
        int min = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == 2) {
                    q.push({i, j});
                } else if (grid[i][j] == 1) {
                    f++;
                }
            }
        }
        vector<vector<int>> directions = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
        while (!q.empty() && f > 0) {
            int size = q.size();
            for (int i = 0; i < size; i++) {
                pair<int, int> p = q.front();
                int r = p.first;
                int c = p.second;
                q.pop();
                for (auto dir : directions) {
                    int rw = r + dir[0];
                    int cw = c + dir[1];
                    if (rw >= 0 && rw < n && cw >= 0 && cw < m &&
                        grid[rw][cw] == 1) {
                        grid[rw][cw] = 2;
                        f--;
                        q.push({rw, cw});
                    }
                }
            }
            min++;
        }
        return f == 0 ? min : -1;
    }
};
