class Solution {
    public String clearDigits(String s) {
        String ans="";
         Stack<Character> st = new Stack<>();
        for(int i=0;i<s.length();i++){
           st.push(s.charAt(i));
           int n=s.charAt(i)-'0';
           if(n<10){
            st.pop();
            st.pop();
           }
        }
        while(!st.isEmpty()){
            ans=st.peek()+ans;
            st.pop();
        }
        return ans;
    }
}