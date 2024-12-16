class Solution {
public:
       int check(int n){
        int pr=1;
        while(n>0){
            int r=n%10;
            if(r==0) return 0;
            pr*=r;
            n/=10;
        }
        return pr;
       }
    int smallestNumber(int n, int t) {
        while(true){
            if(check(n)%t==0){
                return n;
            }
            n++;
        }
    }
};