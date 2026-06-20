class Solution:
    def numIslands(self, grid: List[List[str]]) -> int:
        m=len(grid)
        n=len(grid[0])
        visited=[[0]*n for _ in range(m)]
        delrow=[-1,0,1,0]
        delcol=[0,1,0,-1]
        count=0
        def dfs(sr,sc,grid,visited,delrow,delcol,m,n):
            visited[sr][sc]=1
            for i in range(0,4):
                nrow=sr+delrow[i]
                ncol=sc+delcol[i]
                if(nrow>=0 and nrow<m and ncol>=0 and ncol<n and visited[nrow][ncol]==0 and grid[nrow][ncol]=='1'):
                    dfs(nrow,ncol,grid,visited,delrow,delcol,m,n)
        for i in range(m):
            for j in range(n):
                if grid[i][j]=="1" and visited[i][j]==0:
                    count+=1
                    dfs(i,j,grid,visited,delrow,delcol,m,n)
        return count
