class Solution {
public:
    string answerString(string word, int nums) {
        if(nums==1) return word;
        string ans="";
        for(int i=0;i<word.size();i++){
            ans=max(ans,word.substr(i,word.size()-nums+1));
        }
        return ans;
    }
};