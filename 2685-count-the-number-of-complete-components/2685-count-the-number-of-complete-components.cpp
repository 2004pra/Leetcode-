class Solution {
public:
       void dfs(int node, vector<vector<int>>& adj, vector<int>& vis, int& nodes, int& edges){
            vis[node]=1;
            nodes++;
            edges+=adj[node].size();
            for(auto neigh : adj[node]){
                if(!vis[neigh]){
                    dfs(neigh,adj,vis,nodes,edges);
                }
            }
       }
   
    int countCompleteComponents(int n, vector<vector<int>>& edges) {
        vector<vector<int>> adj(n);
        int ans =0;
        for(auto &e : edges){
              adj[e[0]].push_back(e[1]);
              adj[e[1]].push_back(e[0]);
        }
        vector<int> vis(n,0);
        for(int i=0;i<n;i++){
            if(vis[i]) continue;
            
          int nodes =0;
          int edges =0;
          dfs(i,adj,vis,nodes,edges);
          edges /=2;
          if(edges==(nodes*(nodes-1))/2) ans++;
            
        }
        return ans;
    }
};