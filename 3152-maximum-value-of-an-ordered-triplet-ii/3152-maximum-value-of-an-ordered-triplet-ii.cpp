class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        int n = nums.size();
        if (n < 3) return 0;

        vector<int> pre(n), suf(n);
        pre[0] = nums[0];
        for (int i = 1; i < n; i++) {
            pre[i] = max(pre[i - 1], nums[i]);
        }
        suf[n - 1] = nums[n - 1];
        for (int i = n - 2; i >= 0; i--) {
            suf[i] = max(suf[i + 1], nums[i]);
        }

        long long maxx = 0;
        for (int j = 1; j < n - 1; j++) {
            long long s = (long long)(pre[j - 1] - nums[j]) * suf[j + 1];
            maxx = max(maxx, s);
        }

        return maxx;
    }
};
