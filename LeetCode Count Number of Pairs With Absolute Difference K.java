class Solution {
    public int countKDifference(int[] nums, int k) {
        int c=0;
        for(int i=0;i<nums.length;i++){
            for(int j=i+1;j<nums.length;j++){
                int n=Math.abs(nums[i]-nums[j]);
                if(n==k){
                    c++;
                }
            }
        }
        return c;
    }
}