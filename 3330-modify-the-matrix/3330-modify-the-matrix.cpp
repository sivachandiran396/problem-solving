class Solution {
public:
    vector<vector<int>> modifiedMatrix(vector<vector<int>>& matrix) {
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                if(matrix[i][j]==-1){
                    int max=0;
                    for(int k=0;k<matrix.size();k++){
                        if(max<matrix[k][j]){
                            max=matrix[k][j];
                        }
                    }
                    matrix[i][j]=max;
                }
            }
        }
        return matrix;
    }
};