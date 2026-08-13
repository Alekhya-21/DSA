class Solution:
    def solve(self,i,j,dp,grid):
        if(dp[i][j]!=-1):
            return dp[i][j]
        if(i==0 and j==0):
            dp[i][j]=grid[i][j]
            return dp[i][j]
        if i<0 or j<0:
            return float("inf")
        left=grid[i][j]+self.solve(i,j-1,dp,grid)
        right=grid[i][j]+self.solve(i-1,j,dp,grid)
        dp[i][j]=min(left,right)
        return dp[i][j]
    def minPathSum(self, grid: List[List[int]]) -> int:
        m=len(grid)
        n=len(grid[0])
        dp=[[-1 for _ in range(n)]for _ in range(m)]
        return self.solve(m-1,n-1,dp,grid)