# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def removeNthFromEnd(self, head: ListNode | None, n: int) -> ListNode | None:
        len=0
        temp=head
        while temp!=None:
            len+=1
            temp=temp.next
        if len==n:
            return head.next
        pos=len-n
        temp=head.next
        bef=head
        for i in range(0,pos-1):
            temp=temp.next
            bef=bef.next
        bef.next=temp.next
        temp=None
        return head