# Recursion- time limit error
# class Solution:
#     def func(self,i,target,nums,sum):
#         if(target==sum//2):
#             return True
#         if(i==len(nums) or target>(sum//2)):
#             return False
#         if self.func(i+1,target+nums[i],nums,sum):
#             return True
#         if self.func(i+1,target,nums,sum):
#             return True
#         return False
#     def canPartition(self, nums: List[int]) -> bool:
#         sum=0
#         for i in nums:
#             sum+=i
#         if(sum%2!=0): 
#             return False
#         return self.func(0,0,nums,sum)

# DP- recursion
class Solution:
    def func(self,i,target,nums,sum,dp):
        if(target==sum//2):
            return True
        if(i==len(nums) or target>(sum//2)):
            return False
        if (i,target) in dp:
            return dp[(i,target)]
        pick=self.func(i+1,target+nums[i],nums,sum,dp)
        if pick:
            return True
        dont_pick=self.func(i+1,target,nums,sum,dp)
        if dont_pick:
            return True
        dp[(i,target)]=pick or dont_pick
        return dp[(i,target)]
    def canPartition(self, nums: List[int]) -> bool:
        sum=0
        for i in nums:
            sum+=i
        if(sum%2!=0): 
            return False
        dp={}
        return self.func(0,0,nums,sum,dp)