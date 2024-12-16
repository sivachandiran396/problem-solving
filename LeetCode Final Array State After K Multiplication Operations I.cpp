class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        vector<int> ans=nums;
        while(k--){
           sort(nums.begin(),nums.end());
           auto it=find(ans.begin(),ans.end(),nums[0]);
           int n= distance(ans.begin(), it);
           ans[n]=nums[0]*multiplier;
           nums[0]=nums[0]*multiplier;
        }
        return ans;
            }
};