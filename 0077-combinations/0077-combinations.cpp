class Solution {
public:
void check(int ind,vector<vector<int>>& ans,vector<int>& vec,vector<int>& nums,int k,int n){
    if(vec.size()==k){
        ans.push_back(vec);
        return ;
    }
    if(ind==n){
        return ;
    }
    vec.push_back(nums[ind]);
    check(ind+1,ans,vec,nums,k,n);
    vec.pop_back();
    check(ind+1,ans,vec,nums,k,n);
}
    vector<vector<int>> combine(int n, int k) {
        vector<int> nums;
        for(int i=1;i<=n;i++){
           nums.push_back(i);
        }
        vector<int> vec;
        vector<vector<int>> ans;
        check(0,ans,vec,nums,k,n);
        return ans;
    }
};