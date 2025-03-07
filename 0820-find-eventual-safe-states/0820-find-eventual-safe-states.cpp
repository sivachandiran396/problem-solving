class Solution {
public:
    bool dfs(int node, vector<vector<int>> &adj, vector<int> &vis, vector<int> &path, vector<int> &check) {
        vis[node] = 1;
        path[node] = 1;
        check[node] = 0;  
        for (auto it : adj[node]) {
            if (!vis[it]) {
                if (dfs(it, adj, vis, path, check)) {
                    check[node] = 0;
                    return true;
                }
            }
            if (path[it]) { 
                check[node] = 0;
                return true;
            }
        }
        check[node] = 1;  
        path[node] = 0;  
        return false;
    }

    vector<int> eventualSafeNodes(vector<vector<int>>& adj) {
        int V=adj.size();
         vector<int> vis(V, 0);  
        vector<int> path(V, 0);  
        vector<int> check(V, 0); 

        for (int i = 0; i < V; i++) {
            if (!vis[i]) {  
                dfs(i, adj, vis, path, check);
            }
        }
        vector<int> ans;
        for (int i = 0; i < V; i++) {
            if (check[i]) {
                ans.push_back(i);  
            }
        }

        return ans;
    }
};
