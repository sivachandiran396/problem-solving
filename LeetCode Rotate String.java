class Solution {
    public String rotate(String find){
        char a=find.charAt(find.length()-1);
        String ans="";
        ans+=a;
        for(int i=0;i<find.length()-1;i++){
            ans+=find.charAt(i);
        }
        return ans;
    }
    public boolean rotateString(String s, String goal) {
        int c=s.length();
        String f=s;
        while(c--!=0){
            if(f.equals(goal)){return true;}
            else{ f=rotate(f);}
        }
        return false;
    }
}