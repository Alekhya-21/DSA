from collections import defaultdict
class Solution:
    def findCircleNum(self, isConnected: List[List[int]]) -> int:
        graph=defaultdict(list)
        m=len(isConnected)
        n=len(isConnected[0])
        count=0
        visited=set()
        for i in range(m):
            for j in range(n):
                if isConnected[i][j]==1 and i!=j:
                    graph[i].append(j)
        def dfs(graph,i,visited):
            visited.add(i)
            for neighbor in graph[i]:
                if neighbor not in visited:
                    dfs(graph,neighbor,visited)
        for i in range(m):
            if i not in visited:
                count+=1
                dfs(graph,i,visited)
        return count