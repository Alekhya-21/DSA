class Solution:
    def summaryRanges(self, nums: List[int]) -> List[str]:
        low=0
        high=1
        res=[]
        if not nums:
            return []
        while(high<len(nums)):
            if(nums[high]==nums[high-1]+1):
                high+=1
            else:
                if((high-low)>1):
                    res.append(str(nums[low])+"->"+str(nums[high-1]))
                else:
                    res.append(str(nums[low]))
                low=high
                high+=1
        if((high-low)>1):
            res.append(str(nums[low])+"->"+str(nums[high-1]))
        else:
            res.append(str(nums[low]))
        return res