from collections import defaultdict,deque
class Solution:
    def findTheCity(self, n: int, edges: List[List[int]], distanceThreshold: int) -> int:
        graph=defaultdict(list)
        for u,v,w in edges:
            graph[u].append((v,w))
            graph[v].append((u,w))
        # adjacency matrix
        res=[[float("inf") for _ in range(n)] for _ in range(n)]
        for i in range(n):
            for j in range(n):
                if i==j:
                    res[i][j]=0
        for i in range(n):
            for neighbor,weight in graph[i]:
                res[i][neighbor]=weight
                res[neighbor][i]=weight
        for k in range(n):
            for i in range(n):
                for j in range(n):
                    res[i][j]=min(res[i][j],res[i][k]+res[k][j])
        mini=float("inf")
        ans=0
        for i in range(n):
            count=0
            for j in range(n):
                if(res[i][j]<=distanceThreshold):
                    count+=1
            if(count<=mini):
                mini=count
                ans=i
        return ans