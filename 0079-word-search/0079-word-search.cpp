class Solution {
public:


    bool dfs(vector<vector<char>>& board,int r, int c , string& word,int widx){
         if(widx == word.size()) return true;
         int n = board.size();
         int m = board[0].size();
         if(r<0 || r >=n || c < 0 || c >= m ) 
         return false;

         if(board[r][c]!=word[widx]) return false;
         //future remarking ke liye
         char ch = board[r][c]; 
         // now we mark last visited character
         board[r][c]='$';
         
         bool found = 
         dfs(board,r-1,c,word,widx+1)|| 
         dfs(board,r+1,c,word,widx+1)|| 
         dfs(board,r,c-1,word,widx+1)|| 
         dfs(board,r,c+1,word,widx+1);
         board[r][c]=ch;
         return found;
    }
    bool exist(vector<vector<char>>& board, string word) {
        int n = board.size();
        int m = board[0].size();

        for(int i =0;i<n;i++){
            for(int j =0;j<m;j++){
                if(board[i][j]==word[0]){
                    if(dfs(board,i,j,word,0)){
                        return true;
                    }
                }
            }
        }
        return false;
    }
};