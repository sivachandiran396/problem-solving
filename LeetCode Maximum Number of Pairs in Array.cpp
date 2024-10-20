class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
       int n=nums.size();
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++) mp[nums[i]]++;
        int cnt1=0,cnt2=0;
        for(auto it:mp){
            if(it.second%2==1) cnt1++;
            cnt2+=it.second/2;
        }
        return {cnt2,cnt1};
    }
};