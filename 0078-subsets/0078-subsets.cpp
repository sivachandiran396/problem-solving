class Solution {
public:
void check(int ind,vector<int>& num,vector<vector<int>>& ans,vector<int>& vec,int n){
    if(ind==n) {
         ans.push_back(vec);
         return ;
    }
    check(ind+1,num,ans,vec,n);
    vec.push_back(num[ind]);
    check(ind+1,num,ans,vec,n);
    vec.erase(vec.begin() + (num.size()-1)); 
}
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> vec;
         check(0,nums,ans,vec,nums.size());
         return ans;
    }
};