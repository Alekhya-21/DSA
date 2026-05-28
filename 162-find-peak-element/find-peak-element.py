class Solution:
    def findPeakElement(self, nums: List[int]) -> int:
        # edge cases
        if(len(nums)==1):
            return 0
        if(len(nums)>1 and nums[0]>nums[1]):
            return 0
        if(len(nums)>1 and nums[-1]>nums[-2]):
            return len(nums)-1
        low=1
        high=len(nums)-2
        res=-1
        while(low<=high):
            mid=(low+high)//2
            if(nums[mid-1]<nums[mid]>nums[mid+1]):
                return mid
            elif(nums[mid]>nums[mid-1]):
                low=mid+1
            else:
                high=mid-1
        return res