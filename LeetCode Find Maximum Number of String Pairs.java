class Solution {
    public int maximumNumberOfStringPairs(String[] words) {
        int c=0;
        for(int i=0;i<words.length;i++){
            for(int j=i+1;j<words.length;j++){
                StringBuilder str=new StringBuilder();
                str.append(words[j]);
                str.reverse();
                String s=str.toString();
                if(s.equals(words[i])){
                    c++;
                }
            }
        }
        return c;
    }
}