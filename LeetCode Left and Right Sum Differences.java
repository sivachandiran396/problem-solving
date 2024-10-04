class Solution {
    public int[] leftRightDifference(int[] nums) {
        int[] presum=new int[nums.length];
        int[] sufsum=new int[nums.length];
        presum[0]=nums[0];
        sufsum[nums.length-1]=nums[nums.length-1];
        for(int i=1;i<nums.length;i++){
            presum[i]=nums[i]+presum[i-1];
        }
        for(int i=nums.length-2;i>=0;i--){
           sufsum[i]=nums[i]+sufsum[i+1];
        }
        int[] ans=new int[nums.length];
        for(int i=0;i<nums.length;i++){
            ans[i]=Math.abs(presum[i]-sufsum[i]);
        }
        return ans;
    }
}