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
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int count=0;
        ListNode* temp=head;
        while(temp!=NULL){
            count++;
            temp=temp->next;
        }
        int pos=count-n;
        if(pos==0){
            ListNode* newhead=head->next;
            return newhead;
        }
        temp=head->next;
        ListNode* bef=head;
        for(int i=1;i<pos;i++){
            temp=temp->next;
            bef=bef->next;
        }
        bef->next=temp->next;
        return head;
    }
};