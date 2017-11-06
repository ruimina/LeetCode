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
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(!head) return NULL;
        ListNode* dummy = new ListNode(-1);
        dummy->next = head;
        int n = 0;
        ListNode* temp = dummy, *temp1 = dummy, *temp_head = NULL;
        while(head){
            if(n==0) temp_head = head;
            ListNode* temp2 = head->next;
            head->next = temp1;
            temp1 = head;
            head = temp2;
            if(++n >= k){
                temp->next = temp1;
                temp = temp_head;
                n = 0;
            }
        }
        if(n == 0) temp_head->next = NULL;
        else{
            head = temp1;
            ListNode* temp2 = NULL, *temp3 = NULL;
            while(n-- > 0){
                temp3 = head->next;
                head->next = temp2;
                temp2 = head;
                head = temp3;
            }
            temp->next = temp2;
        }
        return dummy->next;
    }
};