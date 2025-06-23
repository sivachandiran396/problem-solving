class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char, char> smp;
        map<char, char> tmp;
        for (int i = 0; i < s.size(); i++) {
            char cs = s[i];
            char ct = t[i];
            if ((smp.count(cs) && smp[cs] != ct) ||
                (tmp.count(ct) && tmp[ct] != cs))
                return false;
        smp[cs]=ct;
        tmp[ct]=cs;
        }
        return true;
    }
};