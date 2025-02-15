class Solution {
    public int longestOnes(int[] nums, int k) {
        int l=0,r=0,zeros=0;
        int maxlen=0;
        while(r<nums.length){
            if(nums[r]==0) zeros++;
            while(zeros>k){
                if(nums[l]==0) zeros--;
                l++;
            }
            if(zeros<=k){
               int len=r-l+1;
               maxlen=Math.max(len,maxlen);
            }
            r++;
        }
        return maxlen;
    }
}