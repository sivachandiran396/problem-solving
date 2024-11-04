class Solution {
public:
    string compressedString(string word) {
        string ans;
        char ch=word[0];
        int c=0;
        for(int i=0;i<word.length();i++){
           if(ch==word[i]&& c<9) c++;
           else{
            ans.push_back(c+'0');
            ans.push_back(ch);
            ch=word[i];
            c=1;
           }
        }
        ans.push_back(c+'0');
        ans.push_back(ch);
        return ans;
    }
};