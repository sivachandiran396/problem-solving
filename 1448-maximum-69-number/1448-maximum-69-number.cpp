class Solution {
public:
    int maximum69Number(int num) {
        int maxsum = num;
        string ori = to_string(num);
        for (int i = 0; i < ori.size(); i++) {
            string last = ori;
            int rem = last[i] - '0';
            if (rem == 6) {
                rem = 9;
            } else {
                rem = 6;
            }
            last[i] = rem + '0';
            int m = stoi(last);
            maxsum = max(maxsum, m);
        }
        return maxsum;
    }
};
