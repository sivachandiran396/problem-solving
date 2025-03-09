class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& colors) {
        int k=3;
        int n = colors.size();
        vector<int> isAlternating(n, 0);
        for (int i = 0; i < n; i++) {
            if (colors[i] != colors[(i + 1) % n]) {
                isAlternating[i] = 1;
            }
        }
        int count = 0, windowSum = 0;
        for (int i = 0; i < k - 1; i++) {
            windowSum += isAlternating[i];
        }
        for (int i = 0; i < n; i++) {
            if (windowSum == k - 1) count++;  
            windowSum -= isAlternating[i];
            windowSum += isAlternating[(i + k - 1) % n];
        }

        return count;
    }
};
