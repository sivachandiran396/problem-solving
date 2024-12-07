class Solution {
public:
   vector<int> rotate(vector<int>& arr){
    vector<int> ans;
    int n=arr[0];
    for(int i=1;i<arr.size();i++){
        ans.push_back(arr[i]);
    }
    ans.push_back(n);
    return ans;
   }
   int check(vector<int>& given,vector<int>& find){
     int c=0;
    for(int i=0;i<find.size();i++){
       if(given[i]==find[i]){
        c++;
       }
    }
    if(c==find.size()){
        return 1;
    }
    return 0;
        }
   
    bool check(vector<int>& nums) {
      vector<int> vec;
      for(int i=0;i<nums.size();i++){
          vec.push_back(nums[i]);
      }
      sort(vec.begin(),vec.end());
        int n=nums.size();
        while(n--){
            nums=rotate(nums);
             int j= check(nums,vec);
             if(j==1){
                return true;
             }
        }
        return false;
    }
};