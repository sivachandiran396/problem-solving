class Solution {
public:
    bool canAliceWin(int n) {
        if(n<10){return false;}
        int t=0;
        int cur=10;
        int turn=1;
        while(t+cur<=n){
            t+=cur;
            cur--;
            turn++;
        }
        return (turn%2==0);
    }
};