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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* p1 = head, *p2 = head;
        while(n--){
            if(!p2) return head;
            p2 = p2->next;
        }
        if(!p2) return head->next;
        p2 = p2->next;
        while(p2){
            p2 = p2->next;
            p1 = p1->next;
        }
        p1->next = p1->next->next;
        return head;
    }
};