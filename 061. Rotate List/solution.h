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
    ListNode* rotateRight(ListNode* head, int k) {
        if(k == 0) return head;
        if(!head) return NULL;
        int index = 0;
        ListNode *start = head;
        for(;index < k;index++){
            if(!start){
                break;
            }
            start = start->next;
        }
        if(!start) return rotateRight(head, k%index);
        ListNode *left = head, *right = start;
        while(right->next){
            left = left -> next;
            right = right -> next;
        }
        ListNode* newHead = left -> next;
        left -> next = NULL;
        right -> next = head;
        return newHead;
    }
};