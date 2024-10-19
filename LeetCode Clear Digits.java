class Solution {
public:
    string clearDigits(string s) {
       stack<char> st;
       for(int i=0;i<s.length();i++){
        st.push(s[i]);
        int num=s[i]-'0';
        if(num<10){
            st.pop();
            st.pop();
        }
       }
       string str="";
      while (!st.empty())  
    {  
        str+=st.top();
        st.pop();
    }  
    reverse(str.begin(), str.end());
      return str;
    }
};