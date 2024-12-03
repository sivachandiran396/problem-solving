class Solution {
    public String addSpaces(String s, int[] spaces) {
       StringBuilder ans=new StringBuilder();
        int k=0;
        for(int i=0;i<s.length();i++){
            if((k<spaces.length)&&(i==spaces[k])){
                k++;
                ans.append(' ');
            }
            ans.append(s.charAt(i));
        }return ans.toString(); 
    }
}