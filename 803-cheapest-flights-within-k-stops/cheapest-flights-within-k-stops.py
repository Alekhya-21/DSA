import heapq
from collections import defaultdict,deque
class Solution:
    def findCheapestPrice(self, n: int, flights: List[List[int]], src: int, dst: int, k: int) -> int:
        graph=defaultdict(list)
        for u,v,w in flights:
            graph[u].append((v,w))
        dist=[float("inf")]*n
        queue=deque()
        queue.append((0,src))
        k+=1
        while queue and k:
            size=len(queue)
            for i in range(size):
                d,node=queue.popleft()
                for neighbor,weight in graph[node]:
                    temp_dist=d+weight
                    if(temp_dist<dist[neighbor]):
                            dist[neighbor]=temp_dist
                            queue.append((temp_dist,neighbor))
            k-=1
        if(dist[dst]==float("inf")):
            return -1
        return dist[dst]

