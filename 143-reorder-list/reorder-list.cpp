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
ListNode* reverse(ListNode* head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    ListNode* newhead=reverse(head->next);
    ListNode* front=head->next;
    front->next=head;
    head->next=NULL;
    return newhead;
}
public:
    void reorderList(ListNode* head) {
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast->next!=NULL && fast->next->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* newhead=reverse(slow->next);
        slow->next=NULL;
        ListNode* first=head;
        ListNode* second=newhead;
        while(second!=NULL){
            ListNode* t1=first->next;
            ListNode* t2=second->next;
            first->next=second;
            second->next=t1;
            first=t1;
            second=t2;
        }
    }
};