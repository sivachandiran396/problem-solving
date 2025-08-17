class Solution {
public:
    int lengthAfterTransformations(string s, int t) {
        const int MOD = 1e9+7; 
        vector<long long> count(26, 0);
        for (char c : s) count[c - 'a']++;

        while (t--) {
            vector<long long> newCount(26, 0);
            for (int i = 0; i < 26; i++) {
                if (i == 25) {  
                    newCount[0] = (newCount[0] + count[i]) % MOD; 
                    newCount[1] = (newCount[1] + count[i]) % MOD; 
                } else {
                    newCount[i+1] = (newCount[i+1] + count[i]) % MOD; 
                }
            }
            count = newCount;
        }
        long long ans = 0;
        for (long long x : count) ans = (ans + x) % MOD;

        return (int)ans;
    }
};
