class Solution {
public:
    string makeFancyString(string s) {
        string ans;
        char ch=s[0];
        int c=1;
        ans+=ch;
        for(int i=1;i<s.length();i++){
         if((ch==s[i])&&c<2){
            ans+=s[i];
            c++;
         }
         else if(ch!=s[i]||c>2){
            ans+=s[i];
               ch=s[i];
               c=1;
         }
        }
        return ans;
    }
};