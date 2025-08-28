class Solution {
public:
    vector<vector<int>> sortMatrix(vector<vector<int>>& grid) {
        int n = grid.size();
        for (int i = n - 1; i >= 0; i--) {
            int j = 0, k = i;
            vector<int> vec;
            while (k < n && j < n) {
                vec.push_back(grid[k][j]);
                j++;
                k++;
            }
            sort(vec.begin(), vec.end(), greater<int>());
            int jj = 0, kk = i, c = 0, m = vec.size();
            while (kk < n && jj < n && c < m) {
                grid[kk][jj] = vec[c]; 
                c++;
                jj++;
                kk++;
            }
        }
        for (int i = 1; i < n; i++) {
            int j = i, k = 0;
            vector<int> vec;
            while (k < n && j < n) {
                vec.push_back(grid[k][j]);
                j++;
                k++;
            }
            sort(vec.begin(), vec.end());
            int jj = i, kk = 0, c = 0, m = vec.size();
            while (kk < n && jj < n && c < m) {
                grid[kk][jj] = vec[c];  
                c++;
                jj++;
                kk++;
            }
        }

        return grid;
    }
};
