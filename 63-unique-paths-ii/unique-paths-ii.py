class Solution:
    def func(self,i,j,dp,obstacleGrid):
        if(i>=0 and j>=0 and obstacleGrid[i][j]==1):
            return 0
        if(i==0 and j==0):
            return 1
        if(i<0 or j<0):
            return 0
        if(dp[i][j]!=-1):
            return dp[i][j]
        up=self.func(i-1,j,dp,obstacleGrid)
        left=self.func(i,j-1,dp,obstacleGrid)
        dp[i][j]=up+left
        return dp[i][j]
    def uniquePathsWithObstacles(self, obstacleGrid: List[List[int]]) -> int:
        m=len(obstacleGrid)
        n=len(obstacleGrid[0])
        dp=[[-1 for _ in range(n)]for _ in range(m)]
        return self.func(m-1,n-1,dp,obstacleGrid)