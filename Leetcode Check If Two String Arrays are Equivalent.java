class Solution {
    public boolean arrayStringsAreEqual(String[] word1, String[] word2) {
        StringBuilder s1=new StringBuilder();
        StringBuilder s2=new StringBuilder();
        for(int i=0;i<word1.length;i++){
            s1.append(word1[i]);
        }
         for(int i=0;i<word2.length;i++){
            s2.append(word2[i]);
        }
        String str1=s1.toString();
        String str2=s2.toString();
        if(str1.equals(str2)){
            return true;
        }
        return false;
    }
}