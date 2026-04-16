# Recursion- time limit error
# class Solution:
#     def func(self,i,target,nums,summ):
#         if(target==summ//2):
#             return True
#         if(i==len(nums) or target>(summ//2)):
#             return False
#         if self.func(i+1,target+nums[i],nums,summ):
#             return True
#         if self.func(i+1,target,nums,summ):
#             return True
#         return False
#     def canPartition(self, nums: List[int]) -> bool:
#         summ=0
#         for i in nums:
#             summ+=i
#         if(summ%2!=0): 
#             return False
#         return self.func(0,0,nums,summ)

# DP- recursion
class Solution:
    def func(self,i,target,nums,summ,dp):
        if(target==summ//2):
            return True
        if(i==len(nums) or target>(summ//2)):
            return False
        if (i,target) in dp:
            return dp[(i,target)]
        pick=self.func(i+1,target+nums[i],nums,summ,dp)
        if pick:
            return True
        dont_pick=self.func(i+1,target,nums,summ,dp)
        if dont_pick:
            return True
        dp[(i,target)]=pick or dont_pick
        return dp[(i,target)]
    def canPartition(self, nums: List[int]) -> bool:
        summ = sum(nums)
        if(summ%2!=0): 
            return False
        dp={}
        return self.func(0,0,nums,summ,dp)
