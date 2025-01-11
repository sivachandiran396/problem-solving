class Solution {
    public String simplifyPath(String path) {
        Stack<String> st=new Stack<>();
        for(String val:path.split("/")){
            if((val.equals("")) || (val.equals("."))) continue;
            else if(val.equals("..")){
                if(!st.isEmpty()){
                    st.pop();
                }
            }else{
                st.push(val);
            }
        }
        StringBuilder sb = new StringBuilder();
        while (!st.isEmpty()) {
            sb.insert(0, "/" + st.pop());
        }
        return sb.length() == 0 ? "/" : sb.toString();
    }
}