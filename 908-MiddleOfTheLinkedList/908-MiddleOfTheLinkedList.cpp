// Last updated: 01/02/2026, 21:16:39
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
    ListNode* middleNode(ListNode* head) {
        int c=0;
        ListNode* current=head, *q=head;
        while(current!=NULL){
            c++;
            current=current->next;
        }
        int c1=0;

        while(q!=NULL){
            c1++;
            q=q->next;
            if(c1==c/2){
                return q;
                break;
            }
        }
        return head;
    }
};