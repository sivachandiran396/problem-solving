class Solution {
    public void rotate(int[][] matrix) {
        int[][] ans=new int[matrix.length][matrix.length];
        int n=matrix.length;
        for(int i=0;i<matrix.length;i++){
            int l=n-1;
            for(int j=0;j<matrix.length;j++){
              ans[i][j]=matrix[l][i];
              l--;
            }
        }
        for(int i=0;i<ans.length;i++){
            for(int j=0;j<ans.length;j++){
                // System.out.println(ans[i][j]);
                matrix[i][j]=ans[i][j];
            }
        }    
        }
}