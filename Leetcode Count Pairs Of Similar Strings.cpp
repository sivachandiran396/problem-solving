class Solution {
public:
    bool revcheck(string s,string f){
         set<char> st(s.begin(), s.end());
          set<char> ts(f.begin(), f.end());
          string ans1,ans2;
         for(auto it:st){
            ans1+=it;
         }
        for(auto it:ts){
            ans2+=it;
         }
         if(ans1==ans2){
            return true;
         }
        return false;
    }
    int similarPairs(vector<string>& words) {
        int c=0;
        for(int i=0;i<words.size();i++){
            for(int j=i+1;j<words.size();j++){
                if(revcheck(words[i],words[j])){
                    c++;
                }
            }
        }
        return c;
    }
};