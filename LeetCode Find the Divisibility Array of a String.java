class Solution {
    public int[] divisibilityArray(String word, int m) {
        int[] ans=new int[word.length()];
        long num=0;
        for(int i=0;i<word.length();i++){
           long digit = word.charAt(i) - '0';
        num = (num * 10 + digit) % m;
        ans[i] = (num == 0) ? 1 : 0;

        }
        
        return ans;
    }
}