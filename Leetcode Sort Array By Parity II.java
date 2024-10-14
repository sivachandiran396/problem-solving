class Solution {
    public int[] sortArrayByParityII(int[] nums) {
     int[] ans=new int[nums.length];
     int even=0,odd=1;
     for(int i=0;i<nums.length;i++){
        if((nums[i]%2==0)){
            ans[even]=nums[i];
            even+=2;
        }else if((nums[i]%2!=0)){
            ans[odd]=nums[i];
            odd+=2;
        }
     }
     return ans;
    }
}