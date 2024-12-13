class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        vector<int> pre;
        int sum=0,c=0;
        for(int i=0;i<k;i++){
          sum+=arr[i];
        }
        if((sum/k)>=threshold) c++;
        int left=0;
        for(int i=k;i<arr.size();i++){
           sum+=arr[i];
           sum-=arr[left];
           left++;
           if((sum/k)>=threshold) c++;
        }
      return c;
    }
};