class Solution {
public: void dfs(vector<vector<int>> &vis,vector<vector<int>> &mat,int row,int col){
      vis[row][col]=1;
      int n=mat.size();
        int m=mat[0].size();
        vector<int> r={0,-1,0,1};
        vector<int> c={-1,0,1,0};
      for(int i=0;i<4;i++){
                int rw=row+r[i];
                int cw=col+c[i];
                if(rw>=0 && rw<n && cw>=0 && cw<m && !vis[rw][cw] && mat[rw][cw]==1){
                  dfs(vis,mat,rw,cw);
                }
            }
  }
    int numEnclaves(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
        vector<vector<int>> vis(n,vector<int> (m,0));
        queue<pair<int,int>> q;
        for (int i = 0; i < m; i++) {
            if (mat[0][i] == 1 && !vis[0][i]) {  
                dfs(vis,mat,0,i);
            }
            if (mat[n - 1][i] == 1 && !vis[n-1][i]) {  
                 dfs(vis,mat,n-1,i);
            }
        }
      for (int i = 0; i < n; i++) {
            if (mat[i][0] == 1 && !vis[i][0]) { 
                dfs(vis,mat,i,0);
            }
            if (mat[i][m - 1] == 1 && !vis[i][m-1]) { 
               dfs(vis,mat,i,m-1);
            }
        }
       int count=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(!vis[i][j] && mat[i][j]==1){
                    count++;
                }
            }
        }
        return count;
    }
};