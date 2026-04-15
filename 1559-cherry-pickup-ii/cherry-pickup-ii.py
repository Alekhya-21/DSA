class Solution:
    def func(self,i,j1,j2,m,n,dp,grid):
        #boundary cases
        if(j1<0 or j1>=n or j2<0 or j2>=n):
            return float("-inf")
        #base case
        if(i==m-1):
            if(j1==j2):
                return grid[i][j1]
            else:
                return grid[i][j1]+grid[i][j2]
        #Explore all paths robot1 & robot2 can go together
        if(dp[i][j1][j2]!=-1):
            return dp[i][j1][j2]
        maxi=float("-inf")
        for a in range(-1,2,1):
            for b in range(-1,2,1):
                if(j1==j2):
                    value=grid[i][j1]
                else:
                    value=grid[i][j1]+grid[i][j2]
                value+=self.func(i+1,j1+a,j2+b,m,n,dp,grid)
                maxi=max(maxi,value)
        dp[i][j1][j2]=maxi
        return dp[i][j1][j2]

    def cherryPickup(self, grid: List[List[int]]) -> int:
        m=len(grid)
        n=len(grid[0])
        dp=[[[-1 for _ in range(n)] for _ in range(n)]for _ in range(m)]
        return self.func(0,0,n-1,m,n,dp,grid)
