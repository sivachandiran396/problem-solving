class Solution {
    public int maximumLength(int[] nums) {
        int evenc=0,oddc=0;
       for(int i=0;i<nums.length;i++){
        if(nums[i] % 2 == 0){
            evenc++;
        }else{
            oddc++;
        }
       }
        int evendp=0,odddp=0;
        for(int i=0;i<nums.length;i++){
        if(nums[i] % 2 == 0){
            evendp=Math.max(evendp,odddp+1);
        }else{
            odddp=Math.max(odddp,evendp+1);
        }
       }
       return Math.max(evenc,Math.max(evendp,Math.max(odddp,oddc)));        
    }
}