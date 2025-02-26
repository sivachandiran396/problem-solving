class Solution {
public:
void dfs(vector<vector<int>> &adj,vector<int> &vis,int node){
    if(vis[node]==1) return ;
    vis[node]=1;
    vector<int> vec=adj[node];
    for(int i=0;i<vec.size();i++){
        if(!vis[vec[i]]){
            dfs(adj,vis,vec[i]);
        }
    }
}
    int findCircleNum(vector<vector<int>>& isConnected) {
        vector<int> vis(isConnected.size());
        vector<vector<int>> adj;
        for(int i=0;i<isConnected.size();i++){
            vector<int> ans;
            for(int j=0;j<isConnected.size();j++){
               if(isConnected[i][j]==1 && i!=j){
                ans.push_back(j);
               }
            }
            adj.push_back(ans);
        }
          int c=0;
          for(int i=0;i<vis.size();i++){
            if(!vis[i]){
                c++;
                dfs(adj,vis,i);
            }
          }
      return c;
    }
};