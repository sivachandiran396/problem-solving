class Solution {
public:
    int countDays(int days, vector<vector<int>>& meetings) {
        if (meetings.empty()) return days; 
        sort(meetings.begin(), meetings.end());

        int freeDays = days, prevEnd = 0;
        for (const auto& meeting : meetings) {
            int start = meeting[0], end = meeting[1];
            if (start > prevEnd + 1) {
                freeDays -= (end - start + 1);
            } else { 
                freeDays -= max(0, end - prevEnd);
            }

            prevEnd = max(prevEnd, end);
        }

        return freeDays;
    }
};
