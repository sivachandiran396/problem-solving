class Solution {
    public int finalPositionOfSnake(int n, List<String> commands) {
        int[][] ans=new int[n][n];
        int c=0;
        for(int i=0;i<n;i++){
           for(int j=0;j<n;j++){
            ans[i][j]=c;
            c++;
           }
        }
        int j=0,i=0;
        for(String x:commands){
            String s=x;
            if(s.equals("RIGHT")){
               j++;
               i=i;
            }
            else if(s.equals("DOWN")){
                i++;
            }
            else if(s.equals("UP")){
               i--;
               j=j;
            }
            else if(s.equals("LEFT")){
                j--;
                i=i;
            }
            System.out.println(ans[i][j]);
        }
        return ans[i][j];
    }
}