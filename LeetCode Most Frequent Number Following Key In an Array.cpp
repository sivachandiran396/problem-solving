class Solution {
public:
    int mostFrequent(vector<int>& nums, int key) {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]==key)
            {
                mp[nums[i+1]]++;
            }
        }
        int maxi=-1;
        int res=-1;
        for(auto it:mp)
        {
            if(maxi<it.second)
            {
                maxi=it.second;
                res=it.first;
            }
        }
        return res;
    }
};