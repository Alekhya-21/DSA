class Solution:
    def func(self,i,j,dp,grid):
        if(i==0 and j==0):
            return grid[i][j]
        if(dp[i][j]!=-1):
            return dp[i][j]
        up=float("inf")
        left=float("inf")
        if(i>0):
            up=grid[i][j]+self.func(i-1,j,dp,grid)
        if(j>0):
            left=grid[i][j]+self.func(i,j-1,dp,grid)
        dp[i][j]=min(up,left)
        return dp[i][j]
    def minPathSum(self, grid: List[List[int]]) -> int:
        m=len(grid)
        n=len(grid[0])
        dp=[[-1 for _ in range(n)] for _ in range(m)]
        return self.func(m-1,n-1,dp,grid)