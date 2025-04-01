class Solution {
public:
    int titleToNumber(string columnTitle) {
        int ans=0;
        for(auto it:columnTitle){
          int d=it-'A'+1;
          ans=ans*26+d;
        }
        return ans;
    }
};