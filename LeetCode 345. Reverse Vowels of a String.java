class Solution {
    public String reverseVowels(String s) {
        List<Character> li=new ArrayList<>();
        int c=0;
        for(int i=0;i<s.length();i++){
            if(s.charAt(i)=='a'||s.charAt(i)=='A'||s.charAt(i)=='e'||s.charAt(i)=='E'||s.charAt(i)=='i'||s.charAt(i)=='I'||s.charAt(i)=='o'||s.charAt(i)=='O'||s.charAt(i)=='u'||s.charAt(i)=='U'){
                li.add(s.charAt(i));
                c++;
            }
        }
        char[] arr=s.toCharArray();
        for(int i=0;i<arr.length;i++){
           if(arr[i]=='a'||arr[i]=='A'||arr[i]=='e'||arr[i]=='E'||arr[i]=='i'||arr[i]=='I'||arr[i]=='o'||arr[i]=='O'||arr[i]=='u'||arr[i]=='U'){
            char ch=li.get(c-1);
               arr[i]=ch;
               c--;
           }
            }
            String b = new String(arr);
            return b;
    }
}