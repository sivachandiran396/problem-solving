class Solution {
    public int[][] matrixReshape(int[][] mat, int r, int c) {
        List<Integer> lt=new ArrayList<>();
        for(int i=0;i<mat.length;i++){
            for(int j=0;j<mat[0].length;j++){
                lt.add(mat[i][j]);
            }
        }
        System.out.println(lt);
        int[][] val=new int[r][c];
        int l=0;
        if((r*c)==lt.size()){
           for(int i=0;i<val.length;i++){
            for(int j=0;j<val[0].length;j++){
                val[i][j]=lt.get(l);
                l++;
            }
        }
        }else{
            return mat;
        }
        return val;
    }
}