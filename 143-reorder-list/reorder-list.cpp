/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
ListNode* reverseList(ListNode* head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    ListNode* newhead=reverseList(head->next);
    ListNode* front=head->next;
    front->next=head;
    head->next=NULL;
    return newhead;
}
public:
    void reorderList(ListNode* head) {
        // find the middle element
        // reverse the second half
        // relink the list using two pointers
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast->next!=NULL && fast->next->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* newhead=reverseList(slow->next);
        slow->next=NULL;
        ListNode* first=head;
        ListNode* second=newhead;
        while(second!=NULL){
            ListNode* temp1=first->next;
            ListNode* temp2=second->next;
            first->next=second;
            second->next=temp1;
            first=temp1;
            second=temp2;
        }
    }
};