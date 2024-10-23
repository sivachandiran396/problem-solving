class Solution {
public:
    bool digitCount(string num) {
        multiset<char> st;
        for(int i=0;i<num.length();i++){
            st.insert(num[i]);
        }
        int count=0;
        for(int i=0;i<num.length();i++){
            int n=num[i]-'0';
            char c = i + '0';
            int cs=st.count(c);
            if(n==cs){
                count++;
            }
        }
        if(count==num.length()){
            return true;
        }
        return false;
    }
};