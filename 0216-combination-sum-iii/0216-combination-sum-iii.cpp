class Solution {
public:
    void check(int ind, vector<vector<int>>& ans, vector<int>& vec, int sum, int k, int n) {
        if (vec.size() == k && sum == n) {
            ans.push_back(vec);
            return;
        }
        if (vec.size() > k || sum > n || ind > 9) return;

        for (int i = ind; i <= 9; i++) {
            vec.push_back(i);
            check(i + 1, ans, vec, sum + i, k, n);
            vec.pop_back();
        }
    }

    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> ans;
        vector<int> vec;
        check(1, ans, vec, 0, k, n);
        return ans;
    }
};
