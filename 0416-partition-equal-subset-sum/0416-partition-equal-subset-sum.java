class Solution {
    public boolean func(int ind, int target, int[] nums, Boolean[][] dp) {
        if (target == 0)
            return true;
        if (ind == 0)
            return (target == nums[0]);
        if (dp[ind][target] != null)
            return dp[ind][target];
        boolean nott = func(ind - 1, target, nums, dp);
        boolean take = false;
        if (target >= nums[ind]) {
            take = func(ind - 1, target - nums[ind], nums, dp);
        }
        return dp[ind][target] = nott || take;
    }

    public boolean canPartition(int[] nums) {
        int sum = 0;
        for (int i = 0; i < nums.length; i++) {
            sum += nums[i];
        }
        if (sum % 2 != 0)
            return false;
        sum /= 2;
        Boolean[][] dp = new Boolean[nums.length][sum + 1];
        int n = nums.length - 1;
        return func(n, sum, nums, dp);
    }
}