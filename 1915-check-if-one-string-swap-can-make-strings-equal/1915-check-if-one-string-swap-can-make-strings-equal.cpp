class Solution {
public:

    bool areAlmostEqual(string s1, string s2) {
        if(s1==s2) return true;
       if(s1.size()!=s2.size()) return false;
       string ans=s2;
       for(int i=0;i<s1.size();i++){
          for(int j=i+1;j<s2.size();j++){
            swap(ans[i],ans[j]);
            if(ans==s1) return true;
            ans=s2;
          }          
       }return false;
    }
};