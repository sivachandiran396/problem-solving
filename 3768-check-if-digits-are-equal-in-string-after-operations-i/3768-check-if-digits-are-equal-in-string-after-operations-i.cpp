class Solution {
public:
    bool hasSameDigits(string s) {
        while(true){
            string ans;
            for(int i=0;i<s.size()-1;i++){
                int n=(s[i]+s[i+1])%10;
                ans+=(n+'0');
            }
            if(ans.size()==2){
                s=ans;
                break;
            }
            s=ans;
        }
        for(int i=0;i<s.size()-1;i++){
            if(s[i]!=s[i+1]) return false;
        }
        return true;
    }
};