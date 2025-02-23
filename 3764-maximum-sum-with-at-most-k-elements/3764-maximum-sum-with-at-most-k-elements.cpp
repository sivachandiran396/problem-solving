class Solution {
public:
    long long maxSum(vector<vector<int>>& grid, vector<int>& limits, int lk) {
        vector<int> ans;
        for(int i=0;i<grid.size();i++){
            sort(grid[i].begin(), grid[i].end(), greater<int>()); 
            int k = min(limits[i], (int)grid[i].size()); 
            
            for (int j = 0; j < k; j++) {
                ans.push_back(grid[i][j]); 
            }
        }
        sort(ans.begin(), ans.end(), greater<int>());
        long long sum = 0;
        for (int i = 0; i < min(lk, (int)ans.size()); i++) {
            sum += ans[i];
        }
        return sum;
    }
};