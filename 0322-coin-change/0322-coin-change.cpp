class Solution {
public:
int func(int ind,vector<int> &nums,int tar,vector<vector<int>> &dp){
    if(ind==0){
        if(tar%nums[0]==0){
            return tar/nums[0];
        }else{
            return 1e9;
        }
    }
    if(dp[ind][tar]!=-1) return dp[ind][tar];
    int nottake=func(ind-1,nums,tar,dp);
    int take=INT_MAX;
    if(nums[ind]<=tar){
        take=1+func(ind,nums,tar-nums[ind],dp);
    }
    return dp[ind][tar]=min(nottake,take);
}
    int coinChange(vector<int>& coins, int amount) {
        int n=coins.size();
        vector<vector<int>> dp(n,vector<int> (amount+1,-1));
       int ans= func(n-1,coins,amount,dp);
       return ans>=1e9?-1:ans;
    }
};