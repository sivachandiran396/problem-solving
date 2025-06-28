class Solution {
public:
    int longestBeautifulSubstring(string word) {
        int cur = 1, ans = 0;
        int chc = 1;
        for (int i = 1; i < word.length(); i++) {
            if (word[i] > word[i - 1]) {
                chc++;
                cur++;
            } else if (word[i] == word[i - 1]) {
                cur++;
            } else {
                chc = 1;
                cur=1;
            }
            if (cur > ans && chc == 5) {
                ans = cur;
            }
        }
        return ans;
    }
};