class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        vector<string> ans;
        string str;
        int i = 0, n = s.size();
        while (i < n) {
            str += s[i];

            if (str.size() == k) {
                ans.push_back(str);
                str = "";
            }
            i++;
        }
        int c = 0;
        if (str.size() == 0)
            return ans;
        while (str.size() != k) {
            str += fill;
        }
        ans.push_back(str);
        return ans;
    }
};