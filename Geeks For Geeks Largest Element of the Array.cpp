class Solution {
  public:
    int largest(vector<int> &arr) {
      int max=0;
      for(int i=0;i<arr.size();i++){
          if(max<arr[i]){
              max=arr[i];
          }
      }
      return max;
    }
};