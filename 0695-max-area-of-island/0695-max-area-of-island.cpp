class Solution {
public:


  void dfs(vector<vector<int>>& grid, vector<vector<bool>>& vis,int i,int j, int& cnt){
    
        int n= grid.size();
        int m = grid[0].size();
        if(i<0 || i>=n || j<0 || j>=m || grid[i][j]==0 || vis[i][j]==true){
            return;
        }
        else{
            cnt++;
            vis[i][j]=true;
            dfs(grid,vis,i-1,j,cnt);
            dfs(grid,vis,i+1,j,cnt);
            dfs(grid,vis,i,j-1,cnt);
            dfs(grid,vis,i,j+1,cnt);



        }

  }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
      
        int n= grid.size();
        int m = grid[0].size();
        vector<vector<bool>> vis(n,vector<bool>(m,false));
        int maxi = 0;
        for(int i=0;i<n;i++){
            
            for(int j=0;j<m;j++){
                int cnt =0;
                if(!vis[i][j]){
                     dfs(grid,vis,i,j,cnt);
                     
                }
                maxi = max(maxi,cnt);
            }
            
        }
        return maxi;
    }
};