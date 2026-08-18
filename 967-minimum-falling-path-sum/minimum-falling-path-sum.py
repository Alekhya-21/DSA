class Solution:
    def solve(self,i,j,dp,matrix,m,n):
        if(j<0 or j>=n):
            return float("inf")
        if(dp[i][j]!=None):
            return dp[i][j]
        if(i==m-1):
            dp[i][j]=matrix[i][j]
            return dp[i][j]
        left=matrix[i][j]+self.solve(i+1,j-1,dp,matrix,m,n)
        down=matrix[i][j]+self.solve(i+1,j,dp,matrix,m,n)
        right=matrix[i][j]+self.solve(i+1,j+1,dp,matrix,m,n)
        dp[i][j]=min(left,down,right)
        return dp[i][j]
    def minFallingPathSum(self, matrix: List[List[int]]) -> int:
        m=len(matrix)
        n=len(matrix[0])
        res=float("inf")
        for i in range(n):
            dp=[[None for _ in range(n)] for _ in range(m)]
            ans=self.solve(0,i,dp,matrix,m,n)
            res=min(res,ans)
        return res