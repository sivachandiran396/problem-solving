class Solution {
public:
    void dfs(int r, int c, vector<vector<int>>& vis, vector<vector<int>>& grid,
             int color,int f) {
        int n = grid.size();
        int m = grid[0].size();
        vis[r][c] = 1;
        grid[r][c] = color;
        int rw = r;
        int cw = c - 1;
        if (rw >= 0 && rw < n && cw >= 0 && cw < m && grid[rw][cw] ==f &&
            !vis[rw][cw]) {
            dfs(rw, cw, vis, grid, color,f);
        }
        rw = r - 1;
        cw = c;
        if (rw >= 0 && rw < n && cw >= 0 && cw < m && grid[rw][cw] ==f &&
            !vis[rw][cw]) {
            dfs(rw, cw, vis, grid, color,f);
        }
        rw = r;
        cw = c+1;
        if (rw >= 0 && rw < n && cw >= 0 && cw < m && grid[rw][cw] ==f &&
            !vis[rw][cw]) {
            dfs(rw, cw, vis, grid, color,f);
        }
        rw = r + 1;
        cw = c;
        if (rw >= 0 && rw < n && cw >= 0 && cw < m && grid[rw][cw] ==f &&
            !vis[rw][cw]) {
            dfs(rw, cw, vis, grid, color,f);
        }
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc,
                                  int color) {
        int n = image.size();
        int m = image[0].size();
        int s=image[sr][sc];
        image[sr][sc] = color;
        vector<vector<int>> vis(n, vector<int>(m, 0));
                    dfs(sr, sc, vis, image, color,s);
        return image;
    }
};