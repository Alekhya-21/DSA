class Solution:
    def check_board(self,row,col,board,n):
        temp_row=row
        temp_col=col
        # left
        while(col>=0):
            if(board[row][col]=='Q'):
                return False
            col-=1
        # left upper diagonal
        row=temp_row
        col=temp_col
        while(col>=0 and row>=0):
            if(board[row][col]=='Q'):
                return False
            row-=1
            col-=1
        # left lower diagonal
        row=temp_row
        col=temp_col
        while(row<n and col>=0):
            if(board[row][col]=='Q'):
                return False
            row+=1
            col-=1
        return True
    def solve(self,col,board,n,res):
        if(col==n):
            res.append(["".join(row) for row in board])
            return
        for row in range(0,n):
            if(self.check_board(row,col,board,n)):
                board[row][col]='Q'
                self.solve(col+1,board,n,res)
                board[row][col]='.'
    def solveNQueens(self, n: int) -> List[List[str]]:
        board = [["."] * n for _ in range(n)]   
        res=[]
        self.solve(0,board,n,res)
        return res