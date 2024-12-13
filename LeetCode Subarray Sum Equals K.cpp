class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int c=0;
        unordered_map<int,int> mp;
        mp[0]=1;
        int presum=0;
        for(int i=0;i<nums.size();i++){
          presum+=nums[i];
          int r=presum-k;
          c+=mp[r];
          mp[presum]+=1;
        }
        return c;
    }
};