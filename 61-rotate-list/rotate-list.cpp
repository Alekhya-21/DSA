// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode() : val(0), next(nullptr) {}
//  *     ListNode(int x) : val(x), next(nullptr) {}
//  *     ListNode(int x, ListNode *next) : val(x), next(next) {}
//  * };
//  */
// class Solution {
// ListNode* rotate(ListNode* head,int k){
//     int count=1;
//     ListNode* temp=head;
//     while(count!=k){
//         count++;
//         temp=temp->next;
//     }
//     ListNode* newhead=temp->next;
//     temp->next=NULL;
//     return newhead;
// }
// public:
//     ListNode* rotateRight(ListNode* head, int k) {
//         if(head==NULL ||head->next==NULL){
//             return head;
//         }
//             int len=1;
//             ListNode* temp=head;
//             while(temp->next!=NULL){
//                 len++;
//                 temp=temp->next;
//             }
//             if(k==0 || k%len==0 or k==len){
//                 return head;
//             }
//             temp->next=head;
//             k=k%len;
//             ListNode* newhead=rotate(head,len-k);
//         return newhead;
//     }
// };

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
ListNode* rotate(ListNode* head,int k){
    int count=1;
    ListNode* curr=head;
    ListNode* newhead;
    while(curr!=NULL){
        if(count==k){
            newhead=curr->next;
            curr->next=NULL;
            return newhead;
        }
            count++;
            curr=curr->next;
    }
    return newhead;
}
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL || head->next==NULL || k==0) return head;
        int len=0;
        ListNode* temp=head;
        while(temp!=NULL){
            temp=temp->next;
            len++;
        }
        if(k==len || k%len==0) return head;
        k=k%len;
        temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=head;
        ListNode* newhead=rotate(head,len-k);
        return newhead;
    }
};