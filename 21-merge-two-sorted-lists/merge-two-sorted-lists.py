# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def mergeTwoLists(self, list1: ListNode | None, list2: ListNode | None) -> ListNode | None:
        dummy=ListNode(0)
        curr=dummy
        temp1=list1
        temp2=list2
        while temp1 and temp2:
            if temp1.val<=temp2.val:
                curr.next=temp1
                curr=temp1
                temp1=temp1.next
            else:
                curr.next=temp2
                curr=temp2
                temp2=temp2.next
        while temp1!=None:
            curr.next=temp1
            curr=temp1
            temp1=temp1.next
        while temp2!=None:
            curr.next=temp2
            curr=temp2
            temp2=temp2.next
        return dummy.next
    