class Solution {
public:
    bool isBalanced(string num) {
        int odd=0,even=0;
        for(int i=0;i<num.length();i++){
            if(i%2==0){
                int n=num[i]-'0';
                even+=n;
            }else{
                int n=num[i]-'0';
                odd+=n;
            }
        }
        if(odd==even){
            return true;
        }
        return false;
    }
};