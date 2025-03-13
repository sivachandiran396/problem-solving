class Solution {
  public:
  void dfs(int row,int col,vector<vector<int>> &image,int newColor,int oldColor){
      vector<int> rw={0,-1,0,1};
      vector<int> cw={-1,0,1,0};
      image[row][col]=newColor;
      int n=image.size();
      int m=image[0].size();
      for(int i=0;i<4;i++){
          int r=row+rw[i];
          int c=col+cw[i];
          if(r<n && r>=0 && c>=0 && c<m && image[r][c]==oldColor ){
              dfs(r,c,image,newColor,oldColor);
          }
      }
  }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc,
                                  int newColor) {
        int oldColor=image[sr][sc];
        if(oldColor==newColor) return image;
        dfs(sr,sc,image,newColor,oldColor);
        return image;
    }
};
