class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        sort(arr.begin(),arr.end());
      map<int,int> mp;
      int sum=0;
      int n=arr.size();
      for(int i=0;i<arr.size();i++){
          sum+=arr[i];
          mp[arr[i]]+=1;
      }
      int k=(n*(n+1))/2;
      int l=k-sum;
      int num=0;
      for(auto it:mp){
          if(it.second>1) num=it.first;
      }
      return {num,(l+num)};
    }
};
