class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        maxi=0
        low=0
        high=1
        while(high<len(prices)):
            if(prices[high]<prices[low]):
                low=high
            else:
                maxi=max(maxi,prices[high]-prices[low])

            high+=1
        return maxi