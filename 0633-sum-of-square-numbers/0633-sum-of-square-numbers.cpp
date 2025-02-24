class Solution {
public:
    bool judgeSquareSum(int c) {
        for (long long a = 0; a * a <= c; ++a) {
        long long b_squared = c - a * a;
        long long b = std::sqrt(b_squared);
        if (b * b == b_squared) {
            return true;
        }
    }
    return false;
    }
};