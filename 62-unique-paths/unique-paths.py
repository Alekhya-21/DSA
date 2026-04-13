#Recursion- error time limit exceeded
# class Solution:
#     def func(self,i,j):
    #     if(i==0 and j==0):
    #         return 1
    #     if(i<0 or j<0):
    #         return 0
    #     up=self.func(i-1,j)
    #     left=self.func(i,j-1)
    #     return up+left
    # def uniquePaths(self, m: int, n: int) -> int:
    #     return self.func(m-1,n-1)

class Solution:
    def func(self,i,j,dp):
        if(i==0 and j==0):
            return 1
        if(i<0 or j<0):
            return 0
        if(dp[i][j]!=-1):
            return dp[i][j]
        up=self.func(i-1,j,dp)
        left=self.func(i,j-1,dp)
        dp[i][j]=up+left
        return dp[i][j]
    def uniquePaths(self, m: int, n: int) -> int:
        dp=[[-1 for i in range(n)] for i in range(m)]
        return self.func(m-1,n-1,dp)