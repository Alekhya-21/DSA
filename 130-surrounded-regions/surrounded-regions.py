class Solution:
    def solve(self, board: List[List[str]]) -> None:
        m=len(board)
        n=len(board[0])
        visited=[[0]*n for _ in range(m)]
        delrow=[0,-1,0,1]
        delcol=[-1,0,1,0]
        def dfs(row,col,board,visited,delrow,delcol,m,n):
            visited[row][col]=1
            for i in range(4):
                nrow=row+delrow[i]
                ncol=col+delcol[i]
                if(nrow>=0 and nrow<m and ncol>=0 and ncol<n and visited[nrow][ncol]==0 and board[nrow][ncol]=="O"):
                    dfs(nrow,ncol,board,visited,delrow,delcol,m,n)
        # first row
        for i in range(n):
            if(board[0][i]=="O" and visited[0][i]==0):
                dfs(0,i,board,visited,delrow,delcol,m,n)
        # last row
        for i in range(n):
            if(board[m-1][i]=="O" and visited[m-1][i]==0):
                dfs(m-1,i,board,visited,delrow,delcol,m,n)
        # first column
        for i in range(m):
            if(board[i][0]=="O" and visited[i][0]==0):
                dfs(i,0,board,visited,delrow,delcol,m,n)
        # last column
        for i in range(m):
            if(board[i][n-1]=="O" and visited[i][n-1]==0):
                dfs(i,n-1,board,visited,delrow,delcol,m,n)
        for i in range(m):
            for j in range(n):
                if board[i][j]=="O" and visited[i][j]==0:
                    board[i][j]="X"
        return board