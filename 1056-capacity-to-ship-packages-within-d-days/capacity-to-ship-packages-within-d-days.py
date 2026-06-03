class Solution:
    def ship_capacity(self,weights,min_weight,days):
        sum=0
        day_count=1
        for i in range(0,len(weights)):
            if(weights[i]+sum<=min_weight):
                sum+=weights[i]
            else:
                sum=weights[i]
                day_count+=1
        return day_count<=days

    def shipWithinDays(self, weights: List[int], days: int) -> int:
        low=max(weights)
        high=sum(weights)
        res=-1
        while(low<=high):
            mid=(low+high)//2
            if(self.ship_capacity(weights,mid,days)):
                res=mid
                high=mid-1
            else:
                low=mid+1
        return res