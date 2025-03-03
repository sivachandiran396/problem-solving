class Solution {
public:
    void solve(vector<vector<char>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
        vector<vector<int>> vis(n,vector<int> (m,0));
        queue<pair<int,int>> q;
        for (int i = 0; i < m; i++) {
            if (mat[0][i] == 'O') {  
                q.push({0, i});
                vis[0][i] = 1;
            }
            if (mat[n - 1][i] == 'O') {  
                q.push({n - 1, i});
                vis[n - 1][i] = 1;  
            }
        }
      for (int i = 0; i < n; i++) {
            if (mat[i][0] == 'O') { 
                q.push({i, 0});
                vis[i][0] = 1;
            }
            if (mat[i][m - 1] == 'O') { 
                q.push({i, m - 1});
                vis[i][m - 1] = 1;
            }
        }

        vector<int> r={0,-1,0,1};
        vector<int> c={-1,0,1,0};
        while(!q.empty()){
            int f=q.front().first;
            int s=q.front().second;
            q.pop();
            for(int i=0;i<4;i++){
                int rw=f+r[i];
                int cw=s+c[i];
                if(rw>=0 && rw<n && cw>=0 && cw<m && !vis[rw][cw] && mat[rw][cw]=='O'){
                    vis[rw][cw]=1;
                    q.push({rw,cw});
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(!vis[i][j] && mat[i][j]=='O'){
                    mat[i][j]='X';
                }
            }
        }
    }
};