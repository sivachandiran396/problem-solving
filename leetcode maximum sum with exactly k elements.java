class Solution {
    public int maximizeSum(int[] nums, int k) {
        int max=0;
        for(int i=0;i<nums.length;i++){
            if(max<nums[i]){
                max=nums[i];
            }
        }
        int sum=max;
        while(--k!=0){
            max=max+1;
            sum=sum+max;
        }
        return sum;
    }
}