class Solution {
public:
    string tictactoe(vector<vector<int>>& moves) {
        int n=3;
        vector<vector<int>> vec(n,vector<int>(n,-1));
        int c=0;
        for(int i=0;i<moves.size();i++){
            vector<int> vecc=moves[i];
            vec[vecc[0]][vecc[1]]=c;
            c=!c;
        }
        string ans="";
        bool minus=false;
        for(int i=0;i<vec.size();i++){
            for(int j=0;j<vec.size();j++){
                int val=vec[i][j];
                bool an=false;
                if(val==-1){
                    minus=true;
                    continue;
                }
                    if(vec[i][0]==val && vec[i][1]==val && vec[i][2]==val){
                        an=true;
                    }
                     if(vec[0][j]==val && vec[1][j]==val && vec[2][j]==val){
                        an=true;
                }
                    if( i==j && vec[0][0]==val && vec[1][1]==val && vec[2][2]==val){
                        an=true;
                    }
            
                     if(i==j && vec[2][0]==val && vec[1][1]==val && vec[0][2]==val){
                        an=true;
                    }
                
                if(an){
                    if(val==0){
                        ans="A";
                    }else{
                        ans="B";
                    }
                }
            }
        }
        if(ans=="" && !minus) return "Draw"; 
        else if(ans=="" && minus) return "Pending";
        return ans;
    }
};