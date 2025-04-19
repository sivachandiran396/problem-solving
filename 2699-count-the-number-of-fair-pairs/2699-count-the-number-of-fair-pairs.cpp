class Solution {
public:
    long long countFairPairs(vector<int>& nums, int lower, int upper) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        long long count = 0;

        for (int i = 0; i < n; ++i) {
            auto left =
                lower_bound(nums.begin() + i + 1, nums.end(), lower - nums[i]);
            auto right =
                upper_bound(nums.begin() + i + 1, nums.end(), upper - nums[i]);

            count += right - left;
        }

        return count;
    }
};