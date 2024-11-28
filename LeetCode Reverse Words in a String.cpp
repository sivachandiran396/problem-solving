class Solution {
public:
    string reverseWords(string s) {
        string ans;
        string cur;
        int b=' ';
        for(int i=s.length()-1;i>=0;i--){
           int n=s[i];
           if(s[i]!=' '){
            cur=s[i]+cur;
           }
           if((s[i]==' ')&&(cur!="")){
            if(i==0){
                ans+=cur;
                cur="";
            }else{
                ans+=cur;
                cur="";
                ans+=" ";
            }
            }
           if(i==0){
              ans+=cur;
            }
        }
        string an;
        if(ans[ans.length()-1]==' '){
            for(int i=0;i<ans.length()-1;i++){
                an+=ans[i];
            }
            return an;
        }
        return ans;
    }
};