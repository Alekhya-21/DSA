class Solution:
    def solve(self,dp,n):
        if dp[n]!=-1:
            return dp[n]
        dp[n]=self.solve(dp,n-1)+self.solve(dp,n-2)
        return dp[n]
    def fib(self, n: int) -> int:
        dp=[-1]*(n+1)
        if(n<=1):
            return n
        dp[0]=0
        dp[1]=1
        return self.solve(dp,n)