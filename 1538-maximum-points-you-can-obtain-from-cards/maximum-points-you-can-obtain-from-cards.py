class Solution:
    def maxScore(self, cardPoints: List[int], k: int) -> int:
        # edge cases
        if(k==1):
            return max(cardPoints[0],cardPoints[-1])
        if(k==len(cardPoints)):
            return sum(cardPoints)

        n=len(cardPoints)
        window_size=n-k
        total_sum=sum(cardPoints)
        summy=0

        for i in range(0,n-k):
            summy+=cardPoints[i]
        maxi=total_sum-summy

        for i in range(1,k+1):
            summy=summy-cardPoints[i-1]+cardPoints[window_size+i-1]
            maxi=max(maxi,total_sum-summy)
        return maxi

