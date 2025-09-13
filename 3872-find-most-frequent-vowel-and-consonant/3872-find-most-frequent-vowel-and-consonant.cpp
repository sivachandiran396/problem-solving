class Solution {
public:
    int maxFreqSum(string s) {
      map<char,int> mp;
      for(int i=0;i<s.size();i++){
        mp[s[i]]++;
      }  
      int vowel=0,cons=0;
      for(auto it:mp){
        char ch=it.first;
        int val=it.second;
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
            if(val>vowel) vowel=val;
        }else{
            if(val>cons) cons=val;
        }
      }
      return vowel+cons;
    }
};