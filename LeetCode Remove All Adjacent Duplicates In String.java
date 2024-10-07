class Solution {
    public String removeDuplicates(String s) {
        Stack<Character> st=new Stack<>();
        String ans="";
        st.push(s.charAt(0));
        for(int i=1;i<s.length();i++){
            char curr=s.charAt(i);
            if(!st.isEmpty()&&curr==st.peek()){
                st.pop();
            }else{
                st.push(curr);
            }
        }
        int n=st.size();
        while(n--!=0){
            ans=st.pop()+ans;
        }
        return ans;
    }
}