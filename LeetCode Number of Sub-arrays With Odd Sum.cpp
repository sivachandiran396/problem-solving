class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
      long even=0,odd=0;
      vector<int> ans(arr.size());
      ans[0]=arr[0];
      for(int i=1;i<arr.size();i++){
        ans[i]=arr[i]+ans[i-1];
      }
      for(int i=0;i<ans.size();i++){
        if(ans[i]%2==0) even++;
        else odd++;
      }
      long sum=odd+(odd*even);
      return (int)(sum%1000000007);
    }
};