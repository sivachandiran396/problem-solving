class Solution {
    public String sortSentence(String s) {
        String[] arr=s.split(" ",0);
        String[] ans=new String[arr.length];
        for(int i=0;i<arr.length;i++){
            char c=arr[i].charAt(arr[i].length()-1);
            int n=c-'0';
           String st=arr[i].substring(0,(arr[i].length()-1));
           ans[n-1]=st;
        }
       StringBuffer sb = new StringBuffer();
      for(int i = 0; i < ans.length; i++) {
         sb.append(ans[i]);
         if(i+1!=ans.length){
            sb.append(" ");
         }
      }
      String str = sb.toString();
       return str;
    }
}