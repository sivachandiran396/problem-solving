class Solution {
    public int minElement(int[] nums) {
        int[] ans=new int[nums.length];
        for(int i=0;i<nums.length;i++){
            int sum=0;
            int n=nums[i];
            while(n!=0){
                int r=n%10;
                sum+=r;
                n/=10;
            }
            ans[i]=sum;
        }
        Arrays.sort(ans);
        return ans[0];
    }
}