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
ListNode* lastnode(ListNode* head, int n){
    int count=1;
    ListNode* temp=head;
    while(temp!=NULL){
        if(count==n){
            return temp;
        }
        count++;
        temp=temp->next;
    }
    return temp;
}
public:
    ListNode* rotateRight(ListNode* head, int k) {
    int len=1;
    if(head==NULL || head->next==NULL){
        return head;
    }
    ListNode* temp=head;
    while(temp->next!=NULL){
        len++;
        temp=temp->next;
    }
    if(k==0 || k%len==0){
        return head;
    }
    k=k%len;
    temp->next=head;
    ListNode* tail=lastnode(head,len-k);
    head=tail->next;
    tail->next=NULL;
    return head;
    }
};