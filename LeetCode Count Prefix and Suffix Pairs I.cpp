class Solution {
public:
bool ispreandsuf(string s,string g){
    if(g.size()<s.size()) return false;
    int n=s.size();
    string f=g.substr(0,n);
    string se=g.substr(g.size()-n,n);
    return (f==s && se==s);
}
    int countPrefixSuffixPairs(vector<string>& words) {
        int c=0;
        for(int i=0;i<words.size();i++){
           for(int j=i+1;j<words.size();j++){
           if(ispreandsuf(words[i],words[j])){
            c++;
           }
           }
        }
        return c;
    }
};