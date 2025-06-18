class Solution {
public:
   int  dfs(int row, int col, vector<vector<int>>& grid,
             vector<vector<int>>& vis) {
        int n = grid.size();
        int m = grid[0].size();
        vis[row][col]=1;
        int area=1;
        vector<int> r={0,-1,0,1};
        vector<int> c={-1,0,1,0};
        for(int i=0;i<4;i++){
            int rw=row+r[i];
            int cw=col+c[i];
            if(rw<n && rw>=0 && cw<m && cw>=0 && !vis[rw][cw] && grid[rw][cw]==1){
                area+=dfs(rw,cw,grid,vis);
            }
        }
        return area;
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> vis(n, vector<int>(m, 0));
        int maxarea = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == 1 && !vis[i][j]) {
                    int c=dfs(i, j, grid, vis);
                    maxarea=max(c,maxarea);
                }
            }
        }
        return maxarea;
    }
};