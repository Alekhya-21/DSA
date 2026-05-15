# brute force TLE , TC- O(n^2),SP- O(1)
# class Solution:
#     def findDuplicate(self, nums: List[int]) -> int:
#         for i in range(0,len(nums)):
#             for j in range(i+1,len(nums)):
#                 if(nums[i]==nums[j]):
#                     return nums[i]

# set
class Solution:
    def findDuplicate(self, nums: List[int]) -> int:
        my_set=set()
        for i in nums:
            if i in my_set:
                return i
            my_set.add(i)