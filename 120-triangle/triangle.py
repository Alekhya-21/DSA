class Solution:
    def func(self,i,j,n,dp,triangle):
        for j in range(0,n):
            dp[n-1][j]=triangle[n-1][j]
        for i in range(n-2,-1,-1):
            for j in range(i,-1,-1):
                down=float("inf")
                diagonal=float("inf")
                down=triangle[i][j]+dp[i+1][j]
                diagonal=triangle[i][j]+dp[i+1][j+1]
                dp[i][j]=min(down,diagonal)
        return dp[i][j]
    def minimumTotal(self, triangle: List[List[int]]) -> int:
        n=len(triangle)
        dp=[[-1 for _ in range(n)]for _ in range(n)]
        return self.func(0,0,n,dp,triangle)