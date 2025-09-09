class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int n=grid.size();
        int m=grid[0].size();
      vector<vector<int>> ans(n,vector<int>(m));
      vector<int> vec;
      for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            vec.push_back(grid[i][j]);
        }
      }
      int nn=vec.size();
      vector<int> add(vec.size());
      for(int i=0;i<vec.size();i++){
        int ind=(i+k)%nn;
        add[ind]=vec[i];
      }
      int c=0;
      for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            ans[i][j]=add[c];
            c++;
        }
      }
        return ans;
    }
};