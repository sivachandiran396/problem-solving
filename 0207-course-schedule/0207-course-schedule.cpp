class Solution {
public:
    bool canFinish(int N, vector<vector<int>>& prerequisites) {
         vector<int> adj[N];
            for(auto it:prerequisites){
                adj[it[1]].push_back(it[0]);
            }
            vector<int> ind(N,0);
         for(int i=0;i<N;i++){
          for(auto it:adj[i]){
              ind[it]++;
            }
      }
      queue<int> q;
      for(int i=0;i<ind.size();i++){
          if(ind[i]==0) q.push(i);
      }
      vector<int> ans;
      while(!q.empty()){
          int n=q.front();
          q.pop();
          ans.push_back(n);
          for(auto it:adj[n]){
              ind[it]--;
              if(ind[it]==0){
                  q.push(it);
              }
          }
      }
      if(ans.size()==N) return true;
      return false;
    }
};