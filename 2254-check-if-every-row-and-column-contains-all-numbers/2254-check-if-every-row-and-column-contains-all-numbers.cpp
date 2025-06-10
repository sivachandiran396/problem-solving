class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
        for (int i = 0; i < matrix.size(); i++) {
            set<int> row;
            for(int j=0;j<matrix.size();j++){
                row.insert(matrix[i][j]);
            }
            set<int> col;
            for(int j=0;j<matrix.size();j++){
                col.insert(matrix[j][i]);
            }
            if(col.size()!=matrix.size() || row.size()!=matrix.size()) return false;
        }
        return true;
    }
};