class Solution {
public:
void check(int ind,vector<vector<int>> &ans,vector<int> &vec,vector<int> &nums,int n){
    if(ind==n) {
        ans.push_back(vec);
        return ;
    }
    check(ind+1,ans,vec,nums,n);
    vec.push_back(nums[ind]);
    check(ind+1,ans,vec,nums,n);
    vec.erase(vec.begin() + (nums.size()-1)); 
}
    int subsetXORSum(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> vec;
        check(0,ans,vec,nums,nums.size());
        int sum=0;
        for(int i=0;i<ans.size();i++){
            int val=0;
            vector<int> v=ans[i];
            for(int j=0;j<v.size();j++){
                val^=v[j];
            }
            sum+=val;
        }
        return sum;
    }
};