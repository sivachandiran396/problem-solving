class Solution {
    public boolean isPossibleToSplit(int[] nums) {
        List<Integer> lt=new ArrayList<>();
        for(int x:nums){
            lt.add(x);
        }
        if(nums.length%2!=0) return false;
        for(int i=0;i<nums.length;i++){
            int n=Collections.frequency(lt,nums[i]);
            if(n>2){
                return false;
            }
        }
        return true;
    }
}