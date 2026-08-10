class Solution:
    def solve(self,n,dp,nums):
        dp[0]=nums[0]
        dp[1]=max(nums[0],nums[1])
        if dp[n]!=-1:
            return dp[n]
        left=self.solve(n-1,dp,nums) 
        right=nums[n]+self.solve(n-2,dp,nums)
        dp[n]=max(left,right)
        return dp[n]
    def rob(self, nums: List[int]) -> int:
        if len(nums)==1:
            return nums[0]
        if(len(nums)==2):
            return max(nums[0],nums[1])
        dp=[-1]*len(nums)
        return self.solve(len(nums)-1,dp,nums)