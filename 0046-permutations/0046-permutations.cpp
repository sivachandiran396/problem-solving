class Solution {
public:
    void check(vector<int>& vec, vector<int>& nums, vector<vector<int>>& ans,
               int fre[]) {
        if (vec.size() == nums.size()) {
            ans.push_back(vec);
            return;
        }
        for (int i = 0; i < nums.size(); i++) {
            if (!fre[i]) {
                vec.push_back(nums[i]);
                fre[i] = 1;
                check(vec, nums, ans, fre);
                vec.pop_back();
                fre[i] = 0;
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> vec;
        int fre[nums.size()];
        for(int i=0;i<nums.size();i++) fre[i]=0;
        check(vec, nums, ans, fre);
        return ans;
    }
};