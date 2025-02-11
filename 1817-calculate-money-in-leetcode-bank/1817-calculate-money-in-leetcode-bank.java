class Solution {
    public int totalMoney(int n) {
         int c=0,count=0,sum=0;
        for(int i=1;i<=n;i++){
            count++;
            sum+=(count+c);
            if(count==7){ 
                count=0;c++;}
        }
        return sum;
    }
}