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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
    ListNode* t1=list1;
    ListNode* t2=list2;
    ListNode* dummynode=new ListNode(-1);
    ListNode* curr=dummynode;
    while(t1!=NULL && t2!=NULL){
        if(t1->val<=t2->val){
            ListNode* newnode=new ListNode(t1->val);
            t1=t1->next;
            curr->next=newnode;
            curr=newnode;
        }
        else{
            ListNode* newnode=new ListNode(t2->val);
            t2=t2->next;
            curr->next=newnode;
            curr=newnode;
        }
    }
    while(t1!=NULL){
            ListNode* newnode=new ListNode(t1->val);
            t1=t1->next;
            curr->next=newnode;
            curr=newnode;
    }
    while(t2!=NULL){
            ListNode* newnode=new ListNode(t2->val);
            t2=t2->next;
            curr->next=newnode;
            curr=newnode;
    }
    return dummynode->next;







































        // ListNode* temp1=list1;
        // ListNode* temp2=list2;
        // ListNode* dummy=new ListNode(-1);
        // ListNode* curr=dummy;
        // while(temp1!=NULL && temp2!=NULL){
        //     if(temp1->val<temp2->val){
        //         ListNode* newNode=new ListNode(temp1->val);
        //         temp1=temp1->next;
        //         curr->next=newNode;
        //         curr=newNode;
        //     }
        //     else{
        //         ListNode* newNode=new ListNode(temp2->val);
        //         temp2=temp2->next;
        //         curr->next=newNode;
        //         curr=newNode;
        //     }
        // }
        // while(temp1!=NULL){
        //     ListNode* newNode=new ListNode(temp1->val);
        //     temp1=temp1->next;
        //     curr->next=newNode;
        //     curr=newNode;
        // }
        // while(temp2!=NULL){
        //     ListNode* newNode=new ListNode(temp2->val);
        //     temp2=temp2->next;
        //     curr->next=newNode;
        //     curr=newNode;
        // }
        // return dummy->next;
    }
};