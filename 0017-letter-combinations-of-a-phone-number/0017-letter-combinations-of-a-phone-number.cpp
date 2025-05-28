class Solution {
public:

    vector<string> vect = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

    void generate(string digits, int currentIndex, string currentString, vector<string>& ans){
        if(currentIndex == digits.length()){
            ans.push_back(currentString);
            return;
        }

        string current = vect[digits[currentIndex]-'0'];

        for(int i=0; i<current.length(); i++){
            generate(digits, currentIndex+1, currentString + current[i], ans);
        }

        return;

    }

    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        if(digits.length() == 0) return ans;
        generate(digits, 0, "", ans);
        return ans;
    }
};