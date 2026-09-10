from collections import defaultdict
class Solution:
    def findCheapestPrice(self, n: int, flights: List[List[int]], src: int, dst: int, k: int) -> int:
        graph=defaultdict(list)
        for u,v,w in flights:
            graph[u].append((v,w))
        queue=deque()
        dist=[float("inf")]*n
        dist[src]=0
        queue.append((0,src))
        k+=1
        while queue and k:
            size=len(queue)
            for i in range(size):
                d,node=queue.popleft()
                for neighbor,weight in graph[node]:
                    newd=d+weight
                    if newd<dist[neighbor]:
                        dist[neighbor]=newd
                        queue.append((newd,neighbor))
            k-=1
        if dist[dst]==float("inf"):
            return -1
        return dist[dst]