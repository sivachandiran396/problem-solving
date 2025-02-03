class Solution {
public:
    int finalValueAfterOperations(vector<string>& op) {
        int c=0;
        for(int i=0;i<op.size();i++){
            if(op[i]=="++X") c++;
            if(op[i]=="--X") c--;
            if(op[i]=="X++") c++;
            if(op[i]=="X--") c--;
        }
        return c;
    }
};