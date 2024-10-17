class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int t=target;
        for(int i=0;i<letters.size();i++){
            int n=letters[i];
            if(n>t){
                return letters[i];
            }
        }
        return letters[0];
    }
};