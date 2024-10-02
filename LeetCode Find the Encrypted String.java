class Solution {
    public String getEncryptedString(String s, int k) {
        String ans="";
        int n=s.length();
        for(int i=0;i<s.length();i++){
            int j=(i+k)%n;
            ans=ans+s.charAt(j);
        }
        return ans;
    }
}