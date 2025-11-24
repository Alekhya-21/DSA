class Solution {
public:
    bool isSafe(int row,int col,vector<string>& board,int n){
        int duprow=row;
        int dupcol=col;
        // check left upper diagonal
        while(row>=0 && col>=0){
            if(board[row][col]=='Q')return false;
            row--;
            col--;
        }
        // check left side
        row=duprow;
        col=dupcol;
        while(col>=0){
            if(board[row][col]=='Q') return false;
            col--;
        }
        // check left lower diagonal
        row=duprow;
        col=dupcol;
        while(row<n && col>=0){
            if(board[row][col]=='Q') return false;
            row++;
            col--;
        }
        return true;
    }
    void solve(int col,vector<string>& board,vector<vector<string>>& result,int n){
        if(col==n){
            result.push_back(board);
            return;
        }
        for(int row=0;row<n;row++){
            if(isSafe(row,col,board,n)){
                board[row][col]='Q';
                solve(col+1,board,result,n);
                board[row][col]='.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> result;
        vector<string> board(n,string (n,'.'));
        int col=0;
        solve(col,board,result,n);
        return result;
    }
};