class Solution {
public:
    int maxSum(vector<int>& nums) {
        unordered_set<int> seen;
        int maxSum = INT_MIN;
        int sum = 0;

        for (int x : nums) {
            if (x > 0 && !seen.count(x)) {
                seen.insert(x);
                sum += x;
            }
            maxSum = max(maxSum, x);
        }

        return seen.empty() ? maxSum : sum;
    }
};
