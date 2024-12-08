class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& nums) {
        if (nums.empty()) return {};

        vector<int> vec;
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            if (nums[i] > 0) {
                int r = (i + nums[i]) % n;
                vec.push_back(nums[r]);
            } 
            else if (nums[i] < 0) {
                int r = (i - abs(nums[i]) % n + n) % n;
                vec.push_back(nums[r]);
            } 
            else {
                vec.push_back(nums[i]);
            }
        }
        return vec;
    }
};
©leetcode