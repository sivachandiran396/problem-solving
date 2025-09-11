class Solution {
public:
    string sortVowels(string s) {
         multimap<int, char> mp;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' ||
                s[i] == 'U' || s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' ||
                s[i] == 'u') {
                    mp.insert({s[i],s[i]});
            }
        }
        string ans;
        for(int i=0;i<s.size();i++){
            char ch=s[i];
             if (s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' ||
                s[i] == 'U' || s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' ||
                s[i] == 'u'){
                    auto it=mp.begin();
                    ans+=it->second;
                    mp.erase(mp.begin());
                }else{
                    ans+=ch;
                }
        }
        return ans;
    }
};