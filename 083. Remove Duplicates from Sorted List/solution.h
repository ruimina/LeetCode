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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == NULL) return NULL;
        ListNode *p = head, *q = head->next;
        while(q){
            if(q->val != p->val){
                p->next = q;
                p = q;
            }
            q = q->next;
        }
        p->next = NULL;
        return head;
    }
};