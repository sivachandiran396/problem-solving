class Solution {
    public int[][] flipAndInvertImage(int[][] image) {
        for(int i=0;i<image.length;i++){
            List<Integer> ans=new ArrayList<>();
            for(int j=0;j<image.length;j++){
                  ans.add(image[i][j]);
            }
            Collections.reverse(ans);
            int c=0;
            for(int k=0;k<image.length;k++){
                 image[i][k]=ans.get(c++);
            }
        }
        for(int i=0;i<image.length;i++){
            for(int j=0;j<image.length;j++){
                if(image[i][j]==0){
                    image[i][j]=1;
                }else{
                    image[i][j]=0;
                }
            }
        }
       
        return image;
    }
}