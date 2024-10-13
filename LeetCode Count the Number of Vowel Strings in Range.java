class Solution {
    public int vowelStrings(String[] words, int left, int right) {
          boolean[] ans=new boolean[words.length];
        int k=0;
        for(int i=0;i<words.length;i++){
            String s=words[i];
            if(((s.charAt(0)=='a')||(s.charAt(0)=='e')||(s.charAt(0)=='i')||(s.charAt(0)=='o')||(s.charAt(0)=='u'))&&((s.charAt(s.length()-1)=='a')||(s.charAt(s.length()-1)=='e')||(s.charAt(s.length()-1)=='i')||(s.charAt(s.length()-1)=='o')||(s.charAt(s.length()-1)=='u'))){
             ans[k++]=true;
            }else{
                ans[k++]=false;
            }
        }
        int c=0;
        for(int i=left;i<=right;i++){
              if(ans[i]==true){
                c++;
              }
        }
        return c;
    }
}