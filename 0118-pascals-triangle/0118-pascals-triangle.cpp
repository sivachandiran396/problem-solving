class Solution {
public:
vector<int> pascalgeneration(vector<int> &nums,int n){
    vector<int> ans(n+1,0);
    ans[0]=nums[0];
    ans[ans.size()-1]=nums[nums.size()-1];
    for(int i=1;i<n;i++){
        ans[i]=nums[i]+nums[i-1];
    }
    return ans;
}
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        vector<int> vec;
        vec.push_back(1);
        ans.push_back(vec);
        while(--numRows){
           vector<int> ret= pascalgeneration(vec,vec.size());
           ans.push_back(ret);
           vec=ret;
        }
        return ans;
    }
};