class Solution:
    def findOrder(self, numCourses: int, prerequisites: List[List[int]]) -> List[int]:
        graph=defaultdict(list)
        for u,v in prerequisites:
            graph[v].append(u)
        queue=deque()
        indegree=[0]*numCourses
        res=[]
        for i in range(numCourses):
            for neighbor in graph[i]:
                indegree[neighbor]+=1
        for i in range(numCourses):
            if indegree[i]==0:
                queue.append(i)
        while queue:
            node=queue.popleft()
            res.append(node)
            for neighbor in graph[node]:
                indegree[neighbor]-=1
                if indegree[neighbor]==0:
                    queue.append(neighbor)
        if(len(res)!=numCourses):
            return []
        return res
