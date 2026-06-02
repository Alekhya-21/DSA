class Solution:
    def check_bouquet(self,min_days,bloomDay,m,k):
        count=0
        for i in range(0,len(bloomDay)):
            if(bloomDay[i]<=min_days):
                count+=1
                if(count==k):
                    count=0
                    m-=1
                    if(m==0):
                        return True
            else:
                count=0
        return False
    def minDays(self, bloomDay: List[int], m: int, k: int) -> int:
        if(m*k>len(bloomDay)):
            return -1
        low=min(bloomDay)
        high=max(bloomDay)
        res=-1
        while(low<=high):
            mid=(low+high)//2
            if(self.check_bouquet(mid,bloomDay,m,k)):
                res=mid
                high=mid-1
            else:
                low=mid+1
        return res