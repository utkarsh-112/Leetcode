// Last updated: 01/02/2026, 21:18:37
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
        int c=0;
        ListNode* temp=head;
        while(temp!=NULL){
            c++;
            temp=temp->next;
        }
        if(c==1 || c==n)
        return head->next;
        int cnt=0;
        temp=head;
        while(temp!=NULL){
            cnt++;
            if(c-cnt==n){
                temp->next=temp->next->next;
            }
            temp=temp->next;
        }
        return head;
    }
};