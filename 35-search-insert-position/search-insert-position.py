class Solution:
    def searchInsert(self, nums: List[int], target: int) -> int:
        # edge cases
        if(target<nums[0]):
            return 0
        if(target>nums[-1]):
            return len(nums)
        low=0
        high=len(nums)-1
        res=-1
        while(low<=high):
            mid=(low+high)//2
            if(nums[mid]==target):
                return mid
            elif(nums[mid]>=target):
                res=mid
                high=mid-1
            else:
                low=mid+1
        return res