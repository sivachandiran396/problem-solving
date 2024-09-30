class Solution {
    public int[] productExceptSelf(int[] nums) {
        int[] ans=new int[nums.length];
        int[] pre=new int[nums.length];
        int[] suf=new int[nums.length];
        pre[0]=nums[0];
        suf[nums.length-1]=nums[nums.length-1];
        for(int i=1;i<nums.length;i++){
            pre[i]=pre[i-1]*nums[i];
        }
         for(int i=nums.length-2;i>=0;i--){
            suf[i]=suf[i+1]*nums[i];
        }
        ans[0]=suf[1];
        for(int i=1;i<nums.length-1;i++){
            ans[i]=pre[i-1]*suf[i+1];
        }
        ans[nums.length-1]=pre[nums.length-2];
         return ans;
    }
}