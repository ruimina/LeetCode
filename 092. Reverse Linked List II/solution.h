class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int m, int n) {
        if(m == n) return head;
        ListNode dummy = ListNode(0);
        ListNode* left = &dummy;
        left->next = head;
        for(int i = 0; i < m-1; i++) {
            left = left->next;
        }
        ListNode* p = left->next, *right = left->next, *temp = left->next;
        for(int i = m; i < n; i++) {
            ListNode* temp_next = p->next;
            p->next = temp;
            temp = p;
            p = temp_next;
        }
        right->next = p->next;
        p->next = temp;
        left->next = p;
        return (&dummy)->next;
    }
};