
class Solution {
public:
    bool sumOfNumberAndReverse(int num) {
        for (int x = 0; x <= num; x++) {
            if (x + reverseNumber(x) == num) {
                return true;
            }
        }
        return false;
    }

private:
    int reverseNumber(int n) {
        int rev = 0;
        while (n > 0) {
            rev = rev * 10 + n % 10;
            n /= 10;
        }
        return rev;
    }
};


