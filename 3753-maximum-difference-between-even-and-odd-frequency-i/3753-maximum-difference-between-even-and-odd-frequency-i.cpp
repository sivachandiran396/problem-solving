class Solution {
public:
    int maxDifference(string s) {
        map<char, int> mp;
        for (int i = 0; i < s.size(); i++) {
            mp[s[i]] += 1;
        }
        int odd = INT_MIN, even = INT_MAX;
        for (auto it : mp) {
            if (it.second % 2 == 0)
                even = min(even, it.second);
            else
                odd = max(odd, it.second);
        }
        return odd - even;
    }
};