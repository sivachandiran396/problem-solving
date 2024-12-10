class Solution {
public:
    int maximumLength(string s) {
        unordered_map<string,int> mp;
        for(int i=0;i<s.length();i++){
             string ss="";
              ss+=s[i];
              mp[ss]++;
            for(int j=i+1;j<s.length();j++){
             if(s[i]==s[j]){
                ss+=s[j];
                mp[ss]++;
             }else{
                break;
             }
            }
        }
        int len=INT_MIN;
        for(auto it:mp){
            cout<<it.first<<" "<<it.second<<" ";
           if(it.second>=3) {
            int c=it.first.length();
             len=max(len,c);
           }
        }
        return len==INT_MIN ? -1:len;
    }
};