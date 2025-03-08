class Solution {
  public:
    // Function to find the number of islands.
    void dfs(int r,int c,vector<vector<int>> &vis,vector<vector<char>> &grid){
        int n=grid.size();
        int m=grid[0].size();
        vis[r][c]=1;
        vector<int> row={0,-1,0,1};
        vector<int> col={-1,0,1,0};
        for(int i=0;i<4;i++){
                int rw=r+row[i];
                int cw=c+col[i];
                if(rw>=0 && rw<n && cw>=0 && cw<m && grid[rw][cw]=='1' && !vis[rw][cw]){
                    dfs(rw,cw,vis,grid);
            }
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int c=0;
      vector<vector<int>> vis(n,vector<int>(m,0));
      for(int i=0;i<n;i++){
          for(int j=0;j<m;j++){
              if(grid[i][j]=='1' && !vis[i][j]){
                  c++;
                  dfs(i,j,vis,grid);
              }
          }
      }
      return c;
    }
};