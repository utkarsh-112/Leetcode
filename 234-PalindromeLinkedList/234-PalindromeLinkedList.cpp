// Last updated: 01/02/2026, 21:17:11
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
    bool isPalindrome(ListNode* head) {
        vector<int> arr,rev;
        ListNode *p=head;
        while(p!=NULL){
            arr.push_back(p->val);
            rev.push_back(p->val);
            p=p->next;
        }
        reverse(rev.begin(),rev.end());
        if(arr==rev)
            return true;
        return false;
    }
};