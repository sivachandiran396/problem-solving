class Solution {
public:
    vector<int> getNoZeroIntegers(int n) {
        for (int i = 1; i < n; ++i) {
            int m = n - i;
            string a = to_string(i), b = to_string(m);
            if (a.find('0') == string::npos && b.find('0') == string::npos) {
                return {i, m};
            }
        }
        return {}; 
    }
};
