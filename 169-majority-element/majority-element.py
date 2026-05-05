class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        count=0
        for i in nums:
            if(count==0):
                count=1
                el=i
            elif(i==el):
                count+=1
            else:
                count-=1
        if(nums.count(el)>(len(nums)/2)):
            return el
        return -1