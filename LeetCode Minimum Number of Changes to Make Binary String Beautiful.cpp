class Solution {
public:
    int minChanges(string s) {
       int c=0;
       for(int i=0;i<s.length()-1;i+=2){
          if(s[i]!=s[i+1]){
            c++;
          }
       }
       return c;
    }
};