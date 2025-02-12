

class Solution {
public:
    int sum(int a) {
        int n = 0;
        while (a != 0) {
            n += a % 10;
            a /= 10;
        }
        return n;
    }

    int maximumSum(vector<int>& nums) {
        unordered_map<int, int> sumMap;
        int maxSum = -1;
        for (int num : nums) {
            int digitSum = sum(num);
            if (sumMap.count(digitSum)) {
                maxSum = max(maxSum, num + sumMap[digitSum]);
            }
            sumMap[digitSum] = max(sumMap[digitSum], num);
        }

        return maxSum;
    }
};
