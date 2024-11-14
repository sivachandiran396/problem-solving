class Solution {
    public int[] diStringMatch(String s) {
        int l=s.length();
        int c=0;
        int[] arr=new int[l+1];
        for(int i=0;i<s.length();i++){
            if(s.charAt(i)=='I'){
                arr[i]=c++;
            }
            else{
                arr[i]=l--;
            }
        }
        arr[s.length()]=l;
    
    return arr;
}}