class Solution {
public:
    int n,m;
    vector<vector<bool>> vis;
    bool dfs(int r, int c, int pr, int pc, vector<vector<char>>& grid ){
       vis[r][c]=true;

       // for delta row and delta col
       int dr[4] = {1,-1,0,0};
       int dc[4] = {0,0,1,-1};

       //for next row and col
       for(int i=0;i<4;i++){
        int nr = r + dr[i];
        int nc = c + dc[i];

        //check for out of bounds
        if(nr < 0 || nc < 0 ||nr>=n || nc>=m) continue;
        
        //check for same value 
        if(grid[nr][nc]!=grid[r][c]) continue;

      if(!vis[nr][nc]){
        if(dfs(nr,nc,r,c,grid)){
            return true;
        }
      }
      else if(nr!=pr || nc!= pc){
        return true;
      }

       }
       return false;
    }
    bool containsCycle(vector<vector<char>>& grid) {
         n = grid.size();
         m = grid[0].size();
         vis.assign(n,vector<bool>(m,false));

         for(int i =0;i<n;i++){
            for(int j =0;j<m;j++){
                if(!vis[i][j]){
                    if(dfs(i,j,-1,-1,grid)){
                        return true;
                    }
                }
            }
         }
         return false;
    }
};