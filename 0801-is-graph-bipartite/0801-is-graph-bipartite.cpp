class Solution {
public:
bool dfs(vector<vector<int>> &gf,vector<int> &color,int n,int col){
    color[n]=col;
    for(auto it:gf[n]){
        if(color[it]==-1){
            if(dfs(gf,color,it,!col)==false) return false;
        }
        else if(color[it]==color[n]) return false;
    }
    return true;
}
    bool isBipartite(vector<vector<int>>& graph) {
        int n = graph.size();
        vector<int> color(n, -1); 
        for (int i = 0; i < n; ++i) {
            if (color[i] == -1) { 
               if(dfs(graph,color,i,0)==false) return false;
            }
        }
        
        return true;  
    }
};
