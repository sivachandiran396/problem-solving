class Solution {
public:
 int check(int v,vector<int>& nums){
    int n=-1;
      auto h=find(nums.begin(),nums.end(),v);
       int g= distance(nums.begin(), h);
       for(int i=g;i<nums.size();i++){
        if(nums[i]>v){
            return nums[i];
        }
       }
    return n;
 }
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        for(int i=0;i<nums1.size();i++){
            int n=check(nums1[i],nums2);
            ans.push_back(n);
        }
      return ans;
    }
};