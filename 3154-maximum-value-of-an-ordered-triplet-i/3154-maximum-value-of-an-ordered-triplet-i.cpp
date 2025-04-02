class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        long long ans=0;
        for(int i=0;i<nums.size();i++){
            long long sum=0;
            for(int j=i+1;j<nums.size();j++){
                for(int k=j+1;k<nums.size();k++){
                     sum=(long long)(nums[i]-nums[j])*nums[k];
                     if(sum>ans) ans=sum;
                }
            }
        }
        return ans;
    }
};