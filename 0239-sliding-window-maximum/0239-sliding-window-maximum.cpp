class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> ans;
        multiset<int> mulset;
        for(int i=0;i<nums.size() && i<k;i++){
          mulset.insert(nums[i]);
        }
        ans.push_back(*mulset.rbegin());
        int left=0;
        for(int i=k;i<nums.size();i++){
            auto it=mulset.find(nums[left]);
            mulset.erase(it);
            left++;
            mulset.insert(nums[i]);
            ans.push_back( *mulset.rbegin());
        }
        return ans;
    }
};