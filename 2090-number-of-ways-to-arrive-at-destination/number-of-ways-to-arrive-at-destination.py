from collections import defaultdict,deque
import heapq
class Solution:
    def countPaths(self, n: int, roads: List[List[int]]) -> int:
        mod=10**9+7
        graph=defaultdict(list)
        for u,v,w in roads:
            graph[u].append((v,w))
            graph[v].append((u,w))
        queue=[]
        ways=[0]*n
        ways[0]=1
        time=[float("inf")]*n
        time[0]=0
        heapq.heappush(queue,(0,0))
        while queue:
            t,node=heapq.heappop(queue)
            if t>time[node]:
                continue
            for neighbor,tm in graph[node]:
                temp_time=t+tm
                if(temp_time<time[neighbor]):
                    ways[neighbor]=ways[node]
                    time[neighbor]=temp_time
                    heapq.heappush(queue,(temp_time,neighbor))

                elif(temp_time==time[neighbor]):
                    ways[neighbor]=(ways[node]+ways[neighbor])%mod
        return ways[n-1]
