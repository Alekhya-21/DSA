# # Iterative
# class Solution(object):
#     def fib(self, n):
#         a=0
#         b=1
#         c=0
#         if(n==0):
#             return 0
#         if(n==1):
#             return 1
#         for i in range(2,n+1):
#             c=a+b
#             a=b
#             b=c
#         return c

# Recursive
# class Solution(object):
#     def fib(self, n):
#         if(n==0):
#             return 0
#         if(n==1):
#             return 1
#         return self.fib(n-1)+self.fib(n-2)
    
# DP
class Solution(object):
    def func(self,n,dp):
        if(n<=1):
            return n
        if(dp[n]!=-1):
            return dp[n]
        dp[n]=self.func(n-1,dp)+self.func(n-2,dp)
        return dp[n]
    def fib(self, n):
        dp=[-1]*(n+1)
        return self.func(n,dp)