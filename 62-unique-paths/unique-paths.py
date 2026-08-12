class Solution:
    def solve(self,i,j,dp):
        if(dp[i][j]!=-1):
            return dp[i][j]
        if(i==0 and j==0):
            dp[i][j]=1
            return dp[i][j]
        if(i<0 or j<0):
            return 0
        left=self.solve(i,j-1,dp)
        up=self.solve(i-1,j,dp)
        dp[i][j]=left+up
        return dp[i][j]
    def uniquePaths(self, m: int, n: int) -> int:
        dp=[[-1 for _ in range(n)] for _ in range(m)]
        return self.solve(m-1,n-1,dp)