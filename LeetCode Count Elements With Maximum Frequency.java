class Solution {
    public int maxFrequencyElements(int[] nums) {
        int[] fre=new int[101];
        for(int i=0;i<nums.length;i++){
            fre[nums[i]]++;
        }
        Arrays.sort(fre);
        int sum=fre[fre.length-1];
        for(int i=fre.length-2;i>=0;i--){
            if(fre[i+1]==fre[i]){
                sum+=fre[i];
            }
            else{
                  break;
            }
        }
        return sum;
    }
}