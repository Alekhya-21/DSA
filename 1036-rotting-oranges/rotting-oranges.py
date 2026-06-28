from collections import deque
class Solution:
    def orangesRotting(self, grid: List[List[int]]) -> int:
        queue=deque([])
        m=len(grid)
        n=len(grid[0])
        count_fresh=0
        for i in range(m):
            for j in range(n):
                if(grid[i][j]==2):
                    queue.append((i,j,0))
                elif(grid[i][j]==1):
                    count_fresh+=1
        delrow=[-1,0,1,0]
        delcol=[0,1,0,-1]
        visited=[[0]*n for _ in range(m)]
        maxi=0
        count=0
        while queue:
            sr,sc,time=queue.popleft()
            visited[sr][sc]=1
            maxi=max(maxi,time)
            for i in range(0,4):
                nrow=sr+delrow[i]
                ncol=sc+delcol[i]
                if(nrow>=0 and nrow<m and ncol>=0 and ncol<n and grid[nrow][ncol]==1 and visited[nrow][ncol]==0):
                    visited[nrow][ncol]=1
                    queue.append((nrow,ncol,time+1))
                    count+=1
        if(count!=count_fresh):
            return -1
        return maxi




