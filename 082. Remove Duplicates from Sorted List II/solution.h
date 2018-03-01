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
        ListNode* dummy = new ListNode(0), *p = dummy, *q = head;
        dummy->next = head;
        bool flag = true;
        while(q){
            while(q->next && q->val == q->next->val) { flag = false; q = q->next;}
            if(flag){
                p->next = q;
                p = q;
            }
            q = q->next;
            flag = true;
        }
        p->next = NULL;
        return dummy->next;
    }
};