/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
    int lenA=0;
    int lenB=0;
    ListNode* t1=headA;
    ListNode* t2=headB;
    while(t1!=NULL){
        t1=t1->next;
        lenA++;
    }
    while(t2!=NULL){
        t2=t2->next;
        lenB++;
    }
    while(lenA>lenB){
        lenA--;
        headA=headA->next;
    }
    while(lenB>lenA){
        lenB--;
        headB=headB->next;
    }
    while(headA!=headB){
        headA=headA->next;
        headB=headB->next;
    }
    return headA;
































        // int lenA=1;
        // int lenB=1;
        // ListNode *tempA=headA;
        // ListNode *tempB=headB;
        // while(tempA->next!=NULL){
        //     lenA++;
        //     tempA=tempA->next;
        // }
        // while(tempB->next!=NULL){
        //     lenB++;
        //     tempB=tempB->next;
        // }
        // while(lenA>lenB){
        //     lenA--;
        //     headA=headA->next;
        // }
        // while(lenB>lenA){
        //     lenB--;
        //     headB=headB->next;
        // }
        // while(headA!=headB){
        //     headA=headA->next;
        //     headB=headB->next;
        // }
        // return headA;
    }
};