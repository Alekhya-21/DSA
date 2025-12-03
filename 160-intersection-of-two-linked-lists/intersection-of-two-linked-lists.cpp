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
        ListNode* tempA=headA;
        ListNode* tempB=headB;
        while(tempA!=NULL){
            lenA++;
            tempA=tempA->next;
        }
        while(tempB!=NULL){
            lenB++;
            tempB=tempB->next;
        }
        while(lenA>lenB){
            headA=headA->next;
            lenA--;
        }
        while(lenB>lenA){
            headB=headB->next;
            lenB--;
        }
        while(headA!=headB){
            headA=headA->next;
            headB=headB->next;
        }
        return headA;
    }
};