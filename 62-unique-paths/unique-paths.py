# class Solution:
#     def func(self,i,j,dp):
#         if(i==0 and j==0):
#             return 1
#         if(i<0 or j<0):
#             return 0
#         if(dp[i][j]!=-1):
#             return dp[i][j]
#         left=self.func(i,j-1,dp)
#         up=self.func(i-1,j,dp)
#         dp[i][j]=left+up
#         return dp[i][j]
#     def uniquePaths(self, m: int, n: int) -> int:
#         dp=[[-1 for _ in range(n)] for _ in range(m)]
#         return self.func(m-1,n-1,dp)

class Solution:
    def func(self,m,n,dp):
        for i in range(0,m):
            for j in range(0,n):
                if(i==0 and j==0):
                    dp[0][0]=1
                else:
                    left=0
                    up=0
                    if(i>0):
                        up=dp[i-1][j]
                    if(j>0):
                        left=dp[i][j-1]
                    dp[i][j]=left+up
        return dp[m-1][n-1]
    def uniquePaths(self, m: int, n: int) -> int:
        dp=[[0 for _ in range(n)] for _ in range(m)]
        return self.func(m,n,dp)