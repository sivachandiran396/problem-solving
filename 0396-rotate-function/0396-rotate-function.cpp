class Solution {
public:
    int maxRotateFunction(vector<int>& nums) {
        int n = nums.size();
        long sum = 0, F = 0;

        for (int i = 0; i < n; ++i) {
            sum += nums[i];
            F += i * nums[i];
        }

        long maxVal = F;

        for (int i = n - 1; i > 0; --i) {
            F = F + sum - n * nums[i];
            maxVal = max(maxVal, F);
        }

        return static_cast<int>(maxVal);
    }
};
