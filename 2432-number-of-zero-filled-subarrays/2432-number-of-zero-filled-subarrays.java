class Solution {
    public long zeroFilledSubarray(int[] nums) {
        long c=0;int n=0;
        for(int i=0;i<nums.length;i++){
            if(nums[i]==0){
                n=n+1;
            }else{
                n=0;
            }
            c+=n;
        }
        return c;
    }
}