class Solution:
    def func(self,i,j,n,dp,matrix):
        for j in range(0,n):
            dp[0][j]=matrix[0][j]
        for i in range(1,n):
            for j in range(0,n):
                up=matrix[i][j]+dp[i-1][j]
                if(j>0):
                    left_diagonal=matrix[i][j]+dp[i-1][j-1]
                else:
                    left_diagonal=float("inf")
                if(j<n-1):
                    right_diagonal=matrix[i][j]+dp[i-1][j+1]
                else:
                    right_diagonal=float("inf")
                dp[i][j]=min(up,left_diagonal,right_diagonal)
        return dp[n-1][j]
    def minFallingPathSum(self, matrix: List[List[int]]) -> int:
        n=len(matrix)
        dp=[[0 for _ in range(n)] for _ in range(n)]
        self.func(n-1,n-1,n,dp,matrix)
        return min(dp[n-1])