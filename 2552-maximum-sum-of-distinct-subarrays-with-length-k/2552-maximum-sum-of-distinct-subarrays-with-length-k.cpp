class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        long long maxvalue = 0, sum = 0;
        unordered_map<int,int> mp;
        int left = 0;
        int n = nums.size();
        for(int i = 0; i < k && i < n; i++){
            sum += nums[i];
            mp[nums[i]]++;
        }
        if(mp.size() == k) maxvalue = sum;
        for(int i = k; i < n; i++){
            sum -= nums[left];
            mp[nums[left]]--;
            if(mp[nums[left]] == 0){
                mp.erase(nums[left]);
            }
            left++;

            sum += nums[i];
            mp[nums[i]]++;

            if(mp.size() == k && sum > maxvalue){
                maxvalue = sum;
            }
        }
        return maxvalue;
    }
};
