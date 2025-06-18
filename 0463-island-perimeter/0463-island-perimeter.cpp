class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int perimeter = 0;

        vector<int> r = {-1, 0, 1, 0};
        vector<int> c = {0, -1, 0, 1};

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == 1) {
                    for (int k = 0; k < 4; k++) {
                        int rw = i + r[k];
                        int cw = j + c[k];
                        if (rw < 0 || rw >= n || cw < 0 || cw >= m || grid[rw][cw] == 0) {
                            perimeter++;
                        }
                    }
                }
            }
        }
        return perimeter;
    }
};
