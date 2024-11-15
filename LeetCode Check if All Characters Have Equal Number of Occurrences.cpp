class Solution {
public:
    bool areOccurrencesEqual(string s) {
        map<int,int> mp;
        for(int i=0;i<s.length();i++){
            mp[s[i]]++;
        } 
        int n=mp[s[0]];
        for(auto& it:mp){
            if(n!=it.second){
                return false;
            }
        }
        return true;
    }
};