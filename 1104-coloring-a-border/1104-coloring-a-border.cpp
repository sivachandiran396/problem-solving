class Solution {
public:
    vector<vector<int>> colorBorder(vector<vector<int>>& grid, int row, int col, int color) {
        int n = grid.size();
        int m = grid[0].size();
        int oldcolor = grid[row][col];

        vector<vector<int>> vis(n, vector<int>(m, 0));
        queue<pair<int,int>> q;
        q.push({row,col});
        vis[row][col] = 1;

        vector<int> rows = {0,-1,0,1};
        vector<int> cols = {-1,0,1,0};

        vector<pair<int,int>> borders;

        while(!q.empty()){
            pair<int,int> p = q.front();
            q.pop();
            int r = p.first;
            int c = p.second;

            bool isBorder = false;

            for(int i=0; i<4; i++){
                int rw = rows[i] + r;
                int cw = cols[i] + c;

                if(rw < 0 || rw >= n || cw < 0 || cw >= m) {
                    isBorder = true; 
                }
                else if(grid[rw][cw] != oldcolor) {
                    isBorder = true; 
                }
                else if(!vis[rw][cw]) {
                    vis[rw][cw] = 1;
                    q.push({rw,cw});
                }
            }

            if(isBorder) {
                borders.push_back({r,c});
            }
        }
        for(auto &cell : borders){
            grid[cell.first][cell.second] = color;
        }

        return grid;
    }
};
