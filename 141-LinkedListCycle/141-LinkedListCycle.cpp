// Last updated: 01/02/2026, 21:17:34
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
    bool hasCycle(ListNode *head) {
        ListNode *fast=head;
        ListNode *slow=head;

        if(head==nullptr)
        return 0;

        while(fast->next != NULL && fast->next->next != NULL){
            fast=fast->next->next;
            slow=slow->next;

            if(fast==slow)
            return 1;
        }

        return 0;

        
    }
};