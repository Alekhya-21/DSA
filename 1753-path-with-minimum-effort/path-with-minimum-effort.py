from collections import defaultdict,deque
import heapq
class Solution:
    def minimumEffortPath(self, heights: List[List[int]]) -> int:
        m=len(heights)
        n=len(heights[0])
        delrow=[0,-1,0,1]
        delcol=[-1,0,1,0]
        diff=[[float("inf") for _ in range(n)] for _ in range(m)]
        diff[0][0]=0
        queue=[]
        heapq.heappush(queue,(0,0,0))
        while queue:
            d,row,col=heapq.heappop(queue)
            if(d>diff[row][col]):
                    continue
            for i in range(0,4):
                nrow=row+delrow[i]
                ncol=col+delcol[i]
                if(nrow<0 or nrow>=m or ncol<0 or ncol>=n):
                    continue
                temp_diff=abs(heights[nrow][ncol]-heights[row][col])
                effort=max(temp_diff,d)
                if(effort<diff[nrow][ncol]):
                    diff[nrow][ncol]=effort
                    heapq.heappush(queue,(effort,nrow,ncol))
        return diff[m-1][n-1]
