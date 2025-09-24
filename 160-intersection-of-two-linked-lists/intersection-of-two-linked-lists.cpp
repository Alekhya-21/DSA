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
        ListNode* t1=headA;
        ListNode* t2=headB;
        int lenA=0;
        int lenB=0;
        while(t1!=NULL){
            lenA++;
            t1=t1->next;
        }
        while(t2!=NULL){
            lenB++;
            t2=t2->next;
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
    }
};