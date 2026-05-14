# two pointers, TC- O(n^2)
# class Solution:
#     def minLengthAfterRemovals(self, nums: List[int]) -> int:
        # low=0
        # high=len(nums)//2
        # while(high<len(nums)):
        #     if(nums[low]<nums[high]):
        #         nums.pop(high)
        #         nums.pop(low)
        #         low=0
        #         high=len(nums)//2
        #     else:
        #         high+=1
        # return len(nums)

# two pointers, TC- O(n)
class Solution:
    def minLengthAfterRemovals(self, nums: List[int]) -> int:
        low=0
        high=len(nums)//2
        pair_count=0
        while(low<len(nums)//2 and high<len(nums)):
            if(nums[low]<nums[high]):
                pair_count+=1
                low+=1
                high+=1
            else:
                high+=1
        return len(nums)-2*pair_count