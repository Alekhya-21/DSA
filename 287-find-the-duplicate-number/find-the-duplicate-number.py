# brute force TLE , TC- O(n^2),SP- O(1)
# class Solution:
#     def findDuplicate(self, nums: List[int]) -> int:
#         for i in range(0,len(nums)):
#             for j in range(i+1,len(nums)):
#                 if(nums[i]==nums[j]):
#                     return nums[i]

# set, TC- O(n), SC- O(n)
# class Solution:
#     def findDuplicate(self, nums: List[int]) -> int:
#         my_set=set()
#         for i in nums:
#             if i in my_set:
#                 return i
#             my_set.add(i)

# sort- TC- O(n)+O(n log n), SC- O(log n)(for internally memory used by sort)
# class Solution:
#     def findDuplicate(self, nums: List[int]) -> int:
#         nums.sort()
#         for i in range(1,len(nums)):
#             if(nums[i]==nums[i-1]):
#                 return nums[i]

class Solution:
    def findDuplicate(self, nums: List[int]) -> int:
        i=0
        while(i<len(nums)):
            correct=nums[i]-1
            if(nums[i]!=nums[correct]):
                nums[i], nums[correct] = nums[correct], nums[i]
            else:
                if(i!=correct):
                    return nums[i]
                i+=1












