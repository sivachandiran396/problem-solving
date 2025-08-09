class Solution {
public:
    int rearrangeCharacters(string s, string target) {
        unordered_map<char,int> smp;
        unordered_map<char,int> tmp;
        for(int i=0;i<s.size();i++){
            smp[s[i]]++;
        }
        for(int i=0;i<target.size();i++){
            tmp[target[i]]++;
        }
        int maxlen=INT_MAX;
        for(auto it:tmp){
            char ch=it.first;
            int n=it.second;
            int m=smp[ch];
            int a=m/n;
            maxlen=min(maxlen,a);
        }
        return maxlen;
    }
};