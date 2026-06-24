from collections import defaultdict,deque
class Solution:
    def eventualSafeNodes(self, graph: List[List[int]]) -> List[int]:
        edges=defaultdict(list)
        for u in range(len(graph)):
            for v in graph[u]:
                edges[v].append(u)      # reverse edge
        n=len(graph)
        indegree=[0]*n
        for i in range(n):
            for neighbor in edges[i]:
                indegree[neighbor]+=1
        queue=deque([])
        for i in range(n):
            if(indegree[i]==0):
                queue.append(i)
        res=[]
        while queue:
            node=queue.popleft()
            res.append(node)
            for neighbor in edges[node]:
                indegree[neighbor]-=1
                if(indegree[neighbor]==0):
                    queue.append(neighbor)
        return sorted(res)