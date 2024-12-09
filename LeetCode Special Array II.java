class Solution {
    public boolean[] isArraySpecial(int[] nums, int[][] queries) {
       boolean[] vec=new boolean[queries.length];
      int[] pre=new int[nums.length];
      pre[0]=0;
      for(int i=1;i<nums.length;i++){
        if(nums[i]%2==nums[i-1]%2){
            pre[i]=pre[i-1]+1;
        }else{
            pre[i]=pre[i-1];
        }
      }
      for(int i=0;i<queries.length;i++){
        int l=queries[i][0];
        int r=queries[i][1];
        if(pre[l]-pre[r]==0) vec[i]=true;
        else vec[i]=false;
      }
      return vec;
    }
}