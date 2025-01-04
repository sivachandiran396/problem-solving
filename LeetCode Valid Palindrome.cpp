class Solution {
public:
    bool isPalindrome(string s) {
        string ans;
        for(int i=0;i<s.length();i++){
            int n=s[i]-'0';
            if((s[i]>=65 && s[i]<=90) || (s[i]>=97 && s[i]<=122) || (n>=0 && n<10)){
                ans+=tolower(s[i]);
            }
        }
        string val=ans;
        reverse(ans.begin(),ans.end());

        if(val!=ans) return false;
        return true;
    }
};