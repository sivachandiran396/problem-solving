class Solution {
public:
    int maxVowels(string s, int k) {
        string ans;
        int c=0;
        for(int i=0;i<k;i++){
           ans+=s[i];
           if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u') c++;
        }int max=c;
        for(int i=k;i<s.size();i++){
            if(ans[0]=='a'||ans[0]=='e'||ans[0]=='i'||ans[0]=='o'||ans[0]=='u'){
                c--;
            }
            ans.erase(ans.begin());
            ans+=s[i];
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u') c++;
            if(c>max) max=c;
        }
        return max;
    }
};