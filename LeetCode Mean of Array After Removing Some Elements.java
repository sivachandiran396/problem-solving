class Solution {
    public double trimMean(int[] arr) {
        Arrays.sort(arr);
        int per=arr.length/20;
        int sum=0;
        int rem=arr.length-(per*2);
        for(int i=per;i<arr.length-per;i++){
            sum+=arr[i];
        }
       return (double)sum/rem;
    }
}