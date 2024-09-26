class Solution {
    public int kItemsWithMaximumSum(int numOnes, int numZeros, int numNegOnes, int k) {
        int n=numOnes+numZeros+numNegOnes;
        int[] ans=new int[n];
        int kk=0;
        for(int i=0;i<numOnes;i++){
            ans[kk++]=1;
        }
        for(int i=0;i<numZeros;i++){
            ans[kk++]=0;
        }
        for(int i=0;i<numNegOnes;i++){
            ans[kk++]=-1;
        }
        int sum=0;
        for(int i=0;i<k;i++){
            sum+=ans[i];
        }
        return sum;
    }
}