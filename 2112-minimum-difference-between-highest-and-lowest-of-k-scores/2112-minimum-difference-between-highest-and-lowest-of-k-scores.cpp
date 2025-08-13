class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
       sort(nums.begin(),nums.end());
       int mini=INT_MAX;
       vector<int> vec;
       for(int i=0;i<nums.size() && i<k;i++){
        vec.push_back(nums[i]);
       }
       int n=abs(vec[0]-vec[k-1]);
       if(n<mini){
        mini=n;
       }
       int left=0;
       for(int i=k;i<nums.size();i++){
        vec.push_back(nums[i]);
        left++;
        int m=abs(vec[left]-vec[i]);
        if(m<mini){
        mini=m;
       }
       }
       return mini;
    }
};