class Solution:
    def majorityElement(self, nums: List[int]) -> List[int]:
        count1=0
        count2=0
        el1=float("-inf")
        el2=float("-inf")
        for i in nums:
            if(count1==0 and i!=el2):
                el1=i
                count1=1
            elif(count2==0 and i!=el1):
                el2=i
                count2=1
            elif(i==el1):
                count1+=1
            elif(i==el2):
                count2+=1
            else:
                count1-=1
                count2-=1
        n=len(nums)//3
        res=[]
        if(nums.count(el1)>n):
            res.append(el1)
        if(nums.count(el2)>n):
            res.append(el2)
        return res
