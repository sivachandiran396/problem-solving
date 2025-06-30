class Solution {
public:
    int findLHS(vector<int>& nums) {
        map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        int c=0;
        for(auto it:mp){
            int f=it.first;
            if(mp.find(f+1)!=mp.end()){
                int value=mp[f+1];
                if((value+it.second)>c){
                    c=(value+it.second);
                }
            }
        }
        return c;
    }
};