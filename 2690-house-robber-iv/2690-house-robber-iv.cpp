class Solution {
public:
      int minCapability(vector<int>& nums, int k) {
        int left = *min_element(nums.begin(), nums.end());
        int right = *max_element(nums.begin(), nums.end());

        auto canRob = [&](int capability) {
            int count = 0;
            int i = 0;
            while (i < nums.size()) {
                if (nums[i] <= capability) {
                    count++;
                    i++; 
                }
                i++; 
            }
            return count >= k;
        };

        while (left < right) {
            int mid = left + (right - left) / 2;
            if (canRob(mid)) {
                right = mid; 
            } else {
                left = mid + 1; 
            }
        }

        return left;
    }

};