class Solution {
public:
    bool isFascinating(int n) {
        int f = n * 2;
        int s = n * 3;
        string str = to_string(n) + to_string(f) + to_string(s);
        if(count(str.begin(),str.end(),'0')) return false;
        for (int i = 1; i <= 9; i++) {
            char ch = i+'0';
            int co=count(str.begin(),str.end(),ch);
            if(co>1 || co==0) return false; 
        }
        return true;
    }
};