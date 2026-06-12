
class Solution:
    def findCircleNum(self, isConnected: List[List[int]]) -> int:
        graph=defaultdict(list)
        m=len(isConnected)
        for i in range(m):
            for j in range(m):
                if(isConnected[i][j]==1 and i!=j):
                    graph[i].append(j)
        
        visited=set()
        count=0
        def dfs(node):
            visited.add(node)

            for neighbor in graph[node]:
                if neighbor not in visited:
                    dfs(neighbor)
        for i in range(m):
            if i not in visited:
                count+=1
                dfs(i)
        
        return count