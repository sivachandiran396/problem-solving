class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int n=pref.size();
        int c=0;
        for(int i=0;i<words.size();i++){
            if(words[i].size()<n) continue;
            string s=words[i].substr(0,n);
            if(s==pref) c++;
        }
        cout<<words.size();
        return c;
    }
};