class Solution:
    def merge(self, nums1: List[int], m: int, nums2: List[int], n: int) -> None:
        """
        Do not return anything, modify nums1 in-place instead.
        """
        # 3 pointers
        a=m-1
        c=n-1
        b=m+n-1
        while(a>=0 and c>=0):
            if(nums2[c]>=nums1[a]):
                nums1[b]=nums2[c]
                c-=1
                b-=1
            else:
                nums1[b]=nums1[a]
                a-=1
                b-=1
        while(c>=0):
            nums1[b]=nums2[c]
            b-=1
            c-=1
        return (nums1)
