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
    ListNode* swapPairs(ListNode* head) {
        ListNode* dummyNode=new ListNode(-1);
        dummyNode->next=head;
        ListNode* curr=dummyNode;
        while(curr->next!=NULL && curr->next->next!=NULL){
            ListNode* swap1=curr->next;
            ListNode* swap2=curr->next->next;
            swap1->next=swap2->next;
            curr->next=swap2;
            swap2->next=swap1;
            curr=swap1;
        }
        return dummyNode->next;
    }
};