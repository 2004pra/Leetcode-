class Solution {
public:

bool isSafe(vector<string>& board,int row,int col,int n){
    //horizontal check 
    for(int j=0;j<n;j++){
        if(board[row][j]=='Q'){
            return false;
        }
    }
    // for vertical
    for(int i=0;i<n;i++){
        if(board[i][col]=='Q'){
            return false;
        }
    }
    // for left diagonal
    for(int i =row,j=col;i>=0 && j>=0;i--,j--){
        if(board[i][j]=='Q'){
            return false;
        }
    }
    //for right diagonal
    for(int i=row,j=col;i>=0&&j<n;i--,j++){
        if(board[i][j]=='Q'){
            return false;
        }
    }
    return true;
}

void helper( vector<string>& board,vector<vector<string>>& ans,int row,int n){
    if(row==n){
         ans.push_back({board});
         return;
    }

    for(int i =0;i<n;i++){
           if(isSafe(board,row,i,n)){
            board[row][i]='Q';
            helper(board,ans,row+1,n);
            board[row][i]='.';
           }
    }

}

    vector<vector<string>> solveNQueens(int n) {
        vector<string> board(n,string(n,'.'));
        vector<vector<string>> ans;
        helper(board,ans,0,n);
        return ans;
    }
};