class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
      int max=arr[0],sec=-1;
      for(int i=1;i<arr.size();i++){
          if(max<arr[i]){
              sec=max;
              max=arr[i];
          }
         else if((arr[i]>sec)&&(arr[i]<max)){
              sec=arr[i];
          }
      }
      return sec;
    }
};