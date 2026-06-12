# class Solution:
#     def dfs(self,res: List[List[int]],image: List[List[int]],row: int,col: int,iniColor: int,color: int,delrow: List[int],delcol: List[int]):
#         res[row][col]=color
#         m=len(image)
#         n=len(image[0])
#         for i in range(0,4):
#             nrow=row+delrow[i]
#             ncol=col+delcol[i]
#             if(nrow>=0 and nrow<m and ncol>=0 and ncol<n and image[nrow][ncol]==iniColor and res[nrow][ncol]!=color):
#                 self.dfs(res,image,nrow,ncol,iniColor,color,delrow,delcol)
#     def floodFill(self, image: List[List[int]], sr: int, sc: int, color: int) -> List[List[int]]:
#         res=image
#         iniColor=image[sr][sc]
#         delrow=[0,-1,0,1]
#         delcol=[-1,0,1,0]
#         self.dfs(res,image,sr,sc,iniColor,color,delrow,delcol)
#         return res






class Solution:
    def dfs(self,image: List[List[int]], sr: int, sc: int, color: int, delrow: int, delcol:int, inicolor: int,m:int,n:int):
        image[sr][sc]=color
        for i in range(0,4):
            nrow=sr+delrow[i]
            ncol=sc+delcol[i]
            if(nrow>=0 and nrow<m and ncol>=0 and ncol<n and image[nrow][ncol]==inicolor and image[nrow][ncol]!=color):
                self.dfs(image,nrow,ncol,color,delrow,delcol,inicolor,m,n)

    def floodFill(self, image: List[List[int]], sr: int, sc: int, color: int) -> List[List[int]]:
        inicolor=image[sr][sc]
        m=len(image)
        n=len(image[0])
        delrow=[0,-1,0,1]
        delcol=[-1,0,1,0]
        self.dfs(image,sr,sc,color,delrow,delcol,inicolor,m,n)
        return image












