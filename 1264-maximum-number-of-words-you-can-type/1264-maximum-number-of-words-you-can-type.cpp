class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        int ans = 0;
        bool con = false;
        for (int i = 0; i < text.size(); i++) {
            size_t pos = brokenLetters.find(text[i]);
            if (pos != string::npos) {
                con=true;
            }
            if(text[i]==' '){
                if(!con){
                    ans++;
                }
                con=false;
            }
            
        }
        if(!con)  ans++;
        return ans;
    }
};