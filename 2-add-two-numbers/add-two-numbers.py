# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def addTwoNumbers(self, l1: Optional[ListNode], l2: Optional[ListNode]) -> Optional[ListNode]:
        dummynode=ListNode(0)
        curr=dummynode
        carry=0
        while l1 and l2:
            sum=l1.val+l2.val+carry
            carry=sum//10
            temp=ListNode(sum%10)
            curr.next=temp
            curr=curr.next
            l1=l1.next
            l2=l2.next
        while l1:
            sum=l1.val+carry
            carry=sum//10
            temp=ListNode(sum%10)
            curr.next=temp
            curr=curr.next
            l1=l1.next
        while l2:
            sum=l2.val+carry
            carry=sum//10
            temp=ListNode(sum%10)
            curr.next=temp
            curr=curr.next
            l2=l2.next
        if carry:
            temp=ListNode(carry)
            curr.next=temp
        return dummynode.next