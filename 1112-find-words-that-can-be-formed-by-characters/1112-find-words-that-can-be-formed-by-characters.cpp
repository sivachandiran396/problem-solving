class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
       unordered_map<char, int> mp;
        for(int i=0;i<chars.size();i++){
            mp[chars[i]]++;
        }
        int ans=0;
        for(int i=0;i<words.size();i++){
            unordered_map<char,int> emp;
            emp.insert(mp.begin(), mp.end());
            string s=words[i];
            int j=0;
            while(j<s.size()){
                if(emp[s[j]]==0){
                    break;
                }
                emp[s[j]]--;
                j++;
            }
            if(j==s.size()){
                ans+=s.size();
            }
        }
        return ans;
    }
};