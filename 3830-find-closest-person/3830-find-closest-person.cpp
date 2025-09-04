class Solution {
public:
    int findClosest(int x, int y, int z) {
        int n=abs(z-x);
        int m=abs(y-z);
        if(m>n) return 1;
        if(n>m) return 2;
        return 0;
    }
};