class Solution {
    public int dayOfYear(String date) {
        String y=date.substring(0,4);
        String m=date.substring(5,7);
        String d=date.substring(8);
        int year=Integer.parseInt(y);
        int month=Integer.parseInt(m);
        int dat=Integer.parseInt(d);
        int sum=0;
        if(year%4!=0){
            int[] arr={31,28,31,30,31,30,31,31,30,31,30,31};
            int i=0;
            while(i!=(month-1)){
                sum=sum+arr[i];
                i++;
            }
            sum+=dat;
        }else{
            int[] ar={31,29,31,30,31,30,31,31,30,31,30,31};
             int i=0;
            while(i!=(month-1)){
                sum=sum+ar[i];
                i++;
            }
            sum+=dat;
        }
        // System.out.println(sum);
      return sum;
    }
}