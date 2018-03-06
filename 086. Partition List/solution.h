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
    ListNode* partition(ListNode* head, int x) {
        ListNode* p = head, *left_head = new ListNode(0), *right_head = new ListNode(0), *left = left_head, *right = right_head;
        while(p){
            if(p->val < x){
                left->next = p;
                left = p;
            }
            else{
                right->next = p;
                right = p;
            }
            p = p->next;
        }
        left->next = right_head->next;
        right->next = NULL;
        return left_head->next;
    }
};