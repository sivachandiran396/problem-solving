class Solution {
public:
 long long maxCandies(vector<int>& candies, long long k) {
        long long left = 1, right = *max_element(candies.begin(), candies.end()), best = 0;

        while (left <= right) {
            long long mid = left + (right - left) / 2;
            long long totalPiles = 0;

            for (int candy : candies) {
                totalPiles += candy / mid;
                if (totalPiles >= k) break; 
            }

            if (totalPiles >= k) {
                best = mid;  
                left = mid + 1; 
            } else {
                right = mid - 1;  
            }
        }

        return best;
    }
    int maximumCandies(vector<int>& candies, long long k) {
        return maxCandies(candies,k); 
    }
};