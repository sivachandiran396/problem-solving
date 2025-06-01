class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows==1 || numRows>=s.size()) return s;
        vector<vector<char>> vec(numRows);
        int ind=0,d=1;
        for(char c:s){
            vec[ind].push_back(c);
            if(ind==0) d=1;
            else if(ind==numRows-1) d=-1;
            ind+=d;
        }
        string str;
        for(int i=0;i<vec.size();i++){
            for(int j=0;j<vec[i].size();j++){
                str+=vec[i][j];
            }
        }
        return str;
    }
};
