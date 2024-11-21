class Solution {
    public int numEquivDominoPairs(int[][] dominoes) {
        int c=0;
     for(int i=0;i<dominoes.length;i++){
        int f=dominoes[i][0],s=dominoes[i][1];
        for(int j=i+1;j<dominoes.length;j++){
           int ff=dominoes[j][0],ss=dominoes[j][1];
            if((f==ff&&s==ss)||(f==ss&&s==ff)){
                c++;
            }
        }
     }   return c;
    }
}