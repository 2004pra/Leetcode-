class Solution {
public:
   bool dfs(vector<vector<int>>& grid1, vector<vector<int>>& grid2,vector<vector<bool>>& vis, int i,int j){
    int n= grid1.size();
    int m = grid1[0].size();

    

    if(i<0 || i>=n || j<0 || j>=m || vis[i][j] ||grid2[i][j]==0 ){
        return true;
    }

    vis[i][j]=true;

    bool isSub = true;

    if(grid1[i][j]==0){
        isSub = false;
    }
            isSub &= dfs(grid1,grid2,vis,i-1,j);
            isSub &= dfs(grid1,grid2,vis,i+1,j);
            isSub &= dfs(grid1,grid2,vis,i,j-1);
            isSub &= dfs(grid1,grid2,vis,i,j+1);
    
    return isSub;
       }
    int countSubIslands(vector<vector<int>>& grid1, vector<vector<int>>& grid2) {
        int cnt =0;
        int n = grid1.size();
        int m = grid1[0].size();
        vector<vector<bool>> vis(n,vector<bool>(m,false));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                 if(!vis[i][j] && grid2[i][j]==1){
                    if(dfs(grid1,grid2,vis,i,j)){
                    cnt++;
                    }
                 }
            }
        }
        return cnt;
    }
};