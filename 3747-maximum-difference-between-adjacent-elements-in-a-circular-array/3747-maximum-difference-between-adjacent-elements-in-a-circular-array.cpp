class Solution {
public:
    int maxAdjacentDistance(vector<int>& nums) {
        int max_diff = 0;
        int n=nums.size();
        for (int i = 0; i < nums.size(); i++) {
            int diff = abs(nums[i] - nums[(i + 1) % n]);
            max_diff = max(max_diff, diff);
        }
         return max_diff;
    }
};
