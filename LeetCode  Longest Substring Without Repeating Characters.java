class Solution {
    public int lengthOfLongestSubstring(String s) {
        Set<Character> st=new HashSet<>();
        int k=0,max=0,left=0,i=0;
        while(i<s.length()){
            if(!st.contains(s.charAt(i))){
                st.add(s.charAt(i));
                max=Math.max(max,st.size());
                i++;
            }else{
                 st.remove(s.charAt(left));
                 left++;
            }
        }
        return max;
    }
}