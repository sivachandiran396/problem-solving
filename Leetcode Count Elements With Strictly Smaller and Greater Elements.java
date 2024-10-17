class Solution {
    public int countElements(int[] nums) {
        int n=nums.length;
        Arrays.sort(nums);
        int min=nums[0];
        int max=nums[nums.length-1];
        int c=0;
        for(int i=0;i<nums.length;i++){
            if(nums[i]!=min&&nums[i]!=max){
                c++;
            }
        }
        return c;
    }
}