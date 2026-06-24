from collections import defaultdict,deque
class Solution:
    def canFinish(self, numCourses: int, prerequisites: List[List[int]]) -> bool:
        graph=defaultdict(list)
        for u,v in prerequisites:
            graph[u].append(v)
        indegree=[0]*numCourses
        for i in range(numCourses):
            for neighbor in graph[i]:
                indegree[neighbor]+=1
        queue=deque([])
        for i in range(numCourses):
            if(indegree[i]==0):
                queue.append(i)
        res=[]
        while queue:
            node=queue.popleft()
            res.append(node)
            for neighbor in graph[node]:
                indegree[neighbor]-=1
                if(indegree[neighbor]==0):
                    queue.append(neighbor)
        return(len(res)==numCourses)