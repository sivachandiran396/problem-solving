class Solution {
public:
void check(int ind, vector<vector<int>>& ans, vector<int>& vec, vector<int>& nums,int t) {
    if(t==0){
        ans.push_back(vec);
        return ;
    }
    for(int i=ind;i<nums.size();i++){
        if(i>ind && nums[i]==nums[i-1]) continue;
        if(nums[i]>t) break;
        vec.push_back(nums[i]);
        check(i+1,ans,vec,nums,t-nums[i]);
        vec.pop_back();
    }
}
    vector<vector<int>> combinationSum2(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
    vector<vector<int>> ans;
    vector<int> vec;
    int n = nums.size();
    check(0, ans, vec, nums, target);
    return ans;
    }
};
