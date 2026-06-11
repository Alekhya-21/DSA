class Solution:
    def findCircleNum(self, isConnected: List[List[int]]) -> int:
        m=len(isConnected)
        graph=defaultdict(list)

        for i in range(m):
            for j in range(m):
                if(isConnected[i][j]==1 and i!=j):
                    graph[i].append(j)

        def dfs(node):
            visited.add(node)

            for neighbor in graph[node]:
                if neighbor not in visited:
                    dfs(neighbor)
        visited=set()
        count=0
        for i in range(m):
            if i not in visited:
                count+=1
                dfs(i)
        
        return count