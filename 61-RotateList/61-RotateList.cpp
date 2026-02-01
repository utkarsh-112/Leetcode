// Last updated: 01/02/2026, 21:18:04
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
    ListNode* rotateRight(ListNode* head, int k) {
       ListNode* curr=head;
       int len=1;
       if(!head || !head->next || k==0)
       return head;

       while(curr->next){
           len++;
           curr=curr->next;
       }

       curr->next=head;
       k=k%len;
       k=len-k;
       while(k--) curr=curr->next;

       head=curr->next;
       curr->next=NULL;
       return head;
    }
};