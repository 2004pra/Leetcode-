class Solution {
public:
    vector<vector<int>> reverseSubmatrix(vector<vector<int>>& grid, int x, int y, int k) {
          for(int i=y;i<y+k;i++){
            int a = x;
            int b = k+x-1;
            while(a<b){
                swap(grid[a][i],grid[b][i]);
                a++;
                b--;
            }
          }
          return grid; 
    }
};