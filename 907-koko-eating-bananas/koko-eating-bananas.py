# class Solution:
#     def can_koko_eat(self,mini,piles,h):
#         count=0
#         for i in range(0,len(piles)):
#             count+=(math.ceil(piles[i]/mini))
#         return count<=h
#     def minEatingSpeed(self, piles: List[int], h: int) -> int:
#         high=max(piles)
#         for i in range(1,high+1):
#             if(self.can_koko_eat(i,piles,h)):
#                 return i

class Solution:
    def can_koko_eat(self,mini,piles,h):
        count=0
        for i in range(0,len(piles)):
            count+=(math.ceil(piles[i]/mini))
        return count<=h
    def minEatingSpeed(self, piles: List[int], h: int) -> int:
        low=1
        high=max(piles)
        while(low<=high):
            mid=(low+high)//2
            if(self.can_koko_eat(mid,piles,h)):
                res=mid
                high=mid-1
            else:
                low=mid+1
        return res
        