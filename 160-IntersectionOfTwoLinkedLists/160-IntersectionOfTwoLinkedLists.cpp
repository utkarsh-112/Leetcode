// Last updated: 01/02/2026, 21:17:24
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
        ListNode* p=headA;
        ListNode* q=headB;

        unordered_map<ListNode*,bool> visited;
        while(p!=NULL){
            visited[p]=true;
            p=p->next;
        }
        ListNode* res=NULL;
        while(q!=NULL){
            if(visited[q]){
                res=q;
                break;
            }
            q=q->next;
        }
        return res;
    }
};