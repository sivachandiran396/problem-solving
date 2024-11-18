class Solution {
    public int[] decrypt(int[] code, int k) {

        int[] ans=new int[code.length];
        int l=0;
      for(int i=0;i<code.length;i++){
        int sum=0,c=k;
        if(k>0){
            int j=i+1;
            while(c--!=0){
                  j=j%code.length;
               sum+=code[j];
               j++;
            }
        }else if(k<0){
            int j=i-1;
            while(c++!=0){
                 if(j<0){
                j=code.length-1;
               }
                j=(j)%code.length;
               sum+=code[j];
               j--;
            }
        }else{
            sum=0;
        }
       ans[l++]=sum;
      }
      return ans;
    }
}