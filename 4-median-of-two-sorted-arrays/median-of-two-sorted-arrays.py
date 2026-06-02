class Solution:
    def findMedianSortedArrays(self, nums1: List[int], nums2: List[int]) -> float:
        if(len(nums1)>len(nums2)):
            nums1,nums2=nums2,nums1
        n1=len(nums1)
        n2=len(nums2)
        # will perform binary search on shortest array
        low=0
        high=n1
        pick_el=(n1+n2+1)//2
        while(low<=high):
            mid1=(low+high)//2
            mid2=pick_el-mid1
            l1=float("-inf") if mid1==0 else nums1[mid1-1]
            l2=float("-inf") if mid2==0 else nums2[mid2-1]
            r1=float("inf") if mid1==n1 else nums1[mid1]
            r2=float("inf") if mid2==n2 else nums2[mid2]
            if(l1<=r2 and l2<=r1):
                if((n1+n2)%2==0):
                    return (max(l1,l2)+min(r1,r2))/2
                else:
                    return max(l1,l2)
            elif(l2>r1):
                low=mid1+1
            else:
                high=mid1-1
