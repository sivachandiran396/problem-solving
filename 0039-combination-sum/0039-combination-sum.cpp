class Solution {
public:
    void check(int ind, vector<int>& num, vector<vector<int>>& ans, vector<int>& vec, int t, int n, int sum) {
        if (sum == t) {
            ans.push_back(vec);
            return;
        }
        if (sum > t || ind == n) {
            return;
        }
        vec.push_back(num[ind]);
        check(ind, num, ans, vec, t, n, sum + num[ind]);
        vec.pop_back(); 
        check(ind + 1, num, ans, vec, t, n, sum); 
    }

    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        vector<int> vec;
        check(0, nums, ans, vec, target, nums.size(), 0); 
        return ans;
    }
};
