class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int s=nums.size();
        vector<int> ans;
        int i=0;
        while(i<n &&n<s){
            ans.push_back(nums[i]);
            ans.push_back(nums[n]);
            i++;
            n++;
        }
        return ans;
    }
};