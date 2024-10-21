class Solution {
    public int minMoves(int[] ) {
        Arrays.sort(og);
      int ans=0;
      int var=og[0];
      for(int i=og.length-1;i>=0;i--)
      {
        ans+=og[i]-var;
      }
      return ans;
    }
}