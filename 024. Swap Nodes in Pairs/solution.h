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
    ListNode* swapPairs(ListNode* head) {
        ListNode* dummy = new ListNode(-1);
        ListNode* p = dummy;
        p->next = head;
        while(p){
            ListNode* temp1 = p->next;
            if(!temp1) break;
            ListNode* temp2 = temp1->next;
            if(!temp2) break;
            p->next = temp2;
            temp1->next = temp2->next;
            temp2->next = temp1;
            p = temp1;
        }
        return dummy->next;
    }
};