class Solution {
    int f(const string& s1, const string& s2) {
        bitset<26> count;

        for (char c : s1)
            count[c - 'a'] = 1;

        for (char c : s2)
            if (count[c - 'a']) return 0;

        return s1.size() * s2.size();
    }

public:
    int maxProduct(vector<string>& words) {
        int ans = 0;
        int n = words.size();
        for (int i = 0; i < n; ++i) {
            for (int j = i + 1; j < n; ++j) {
                ans = max(ans, f(words[i], words[j]));
            }
        }
        return ans;
    }
};
