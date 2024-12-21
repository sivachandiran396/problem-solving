class Solution {
public:
    int countSubarrays(vector<int>& nums) {
        int c=0;
        for(int i=0;i<nums.size()-2;i++){
            int f=nums[i];
            int s=nums[i+1];
            int t=nums[i+2];
            if((s/2.0)==(f+t)){
                c++;
            }
        }
        return c;
    }
};©leetcode