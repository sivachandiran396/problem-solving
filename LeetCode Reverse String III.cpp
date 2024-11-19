class Solution {
public:
    string reverseWords(string s) {
        string ans;
        string val;
        int i=0;
        while(i<s.length()){
          if((s[i]==' ')){
            reverse(val.begin(),val.end());
            ans=ans+val;
            ans+=' ';
              val.clear();
          }else{
             val+=s[i];
          }
          i++;
        }
        reverse(val.begin(),val.end());
        ans+=val;
        return ans;
    }
};