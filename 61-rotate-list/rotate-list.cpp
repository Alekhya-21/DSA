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
ListNode* findlastnode(ListNode* head,int k){
    int count=1;
    ListNode* temp=head;
    while(temp!=NULL){
        if(count==k){
            return temp;
        }
        count++;
        temp=temp->next;
    }
    return temp;
}
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL || head->next==NULL){
            return head;
        }
        ListNode* tail=head;
        int len=1;
        while(tail->next!=NULL){
            len++;
            tail=tail->next;
        }
        if(head==NULL || head->next==NULL || k%len==0 || k==0){
            return head;
        }
        k=k%len;
        tail->next=head;
        ListNode* newlastnode=findlastnode(head,len-k);
        head=newlastnode->next;
        newlastnode->next=NULL;
        return head;
    }
};