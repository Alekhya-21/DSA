from collections import defaultdict,deque
class Solution:
    def orangesRotting(self, grid: List[List[int]]) -> int:
        m=len(grid)
        n=len(grid[0])
        queue=deque()
        visited=[[0]*n for _ in range(m)]
        fresh_count=0
        for i in range(m):
            for j in range(n):
                if grid[i][j]==2:
                    queue.append((i,j,0))
                    visited[i][j]=1
                elif grid[i][j]==1:
                    fresh_count+=1
        maxi=0
        delrow=[0,-1,0,1]
        delcol=[-1,0,1,0]
        count=0
        while queue:
            row,col,time=queue.popleft()
            maxi=max(maxi,time)
            for i in range(4):
                nrow=row+delrow[i]
                ncol=col+delcol[i]
                if(nrow>=0 and nrow<m and ncol>=0 and ncol<n and visited[nrow][ncol]==0 and grid[nrow][ncol]==1):
                    visited[nrow][ncol]=1
                    grid[nrow][ncol]=2
                    queue.append((nrow,ncol,time+1))
                    count+=1
        if(count!=fresh_count):
            return -1
        return maxi
