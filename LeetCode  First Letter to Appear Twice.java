class Solution {
    public char repeatedCharacter(String s) {
        List<Character> st=new ArrayList<>();
        Stack<Character> stk=new Stack<>();
       stk.push(s.charAt(0));
       st.add(s.charAt(0));
       char c=' ';
        for(int i=1;i<s.length();i++){
             if(s.charAt(i)==stk.peek()){
                return s.charAt(i);
             }
             if(st.contains(s.charAt(i))){
                c=s.charAt(i);
                break;
             }
             st.add(s.charAt(i));
             stk.push(s.charAt(i));
                     }
      return c;
    }
}