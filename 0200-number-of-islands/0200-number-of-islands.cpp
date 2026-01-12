class Solution {
public:
   void dfs(int r , int c , vector<vector<bool>>& vis, vector<vector<char>>& grid , int n , int m){

    if(r < 0 || c < 0 || r>=n ||c>=m || vis[r][c] || grid[r][c]!='1'){
        return;
    }
      vis[r][c]= true;
     dfs(r+1,c,vis,grid,n,m); // for botton
     dfs(r-1,c,vis,grid,n,m);  // for up 
     dfs(r,c-1,vis,grid,n,m); // left
     dfs(r,c+1,vis,grid,n,m);   // right
   }
    int numIslands(vector<vector<char>>& grid) {
        int cnt = 0;
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<bool>> vis(n,vector<bool>(m,false));
        for(int i =0;i<n;i++){
            for(int j =0;j<m;j++){
                if(grid[i][j]=='1'&&!vis[i][j]){
                    dfs(i,j,vis,grid,n ,m);
                        cnt++;  
                }
            }
        }
        return cnt;
    }
};