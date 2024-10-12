class Solution {
    public int maximumGap(int[] nums) {
        if(nums.length<2){
            return 0;
        }
        Arrays.sort(nums);
        int k=0;
        int[] arr=new int[nums.length-1];
        for(int i=0;i<nums.length-1;i++){
            int n=Math.abs(nums[i+1]-nums[i]);
            arr[k++]=n;
        }
        Arrays.sort(arr);
        return arr[arr.length-1];
    }
}