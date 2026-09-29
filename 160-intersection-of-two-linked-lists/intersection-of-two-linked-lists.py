# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def getIntersectionNode(self, headA: ListNode, headB: ListNode) -> Optional[ListNode]:
        lena=0
        lenb=0
        tempa=headA
        tempb=headB
        while tempa!=None:
            lena+=1
            tempa=tempa.next
        while tempb!=None:
            lenb+=1
            tempb=tempb.next
        tempa=headA
        tempb=headB
        if lena>lenb:
            while lena!=lenb:
                lena-=1
                tempa=tempa.next
        else:
            while lenb!=lena:
                lenb-=1
                tempb=tempb.next
        while tempa!=tempb:
            tempa=tempa.next
            tempb=tempb.next
        return tempa

