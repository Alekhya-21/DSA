# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def swapPairs(self, head: ListNode | None) -> ListNode | None:
        if head==None or head.next==None:
            return head
        dummy=ListNode()
        dummy.next=head
        curr=dummy
        while curr.next and curr.next.next:
            n1=curr.next
            n2=curr.next.next
            temp=n2.next
            curr.next=n2
            n2.next=n1
            n1.next=temp
            curr=n1
        return dummy.next
            
            