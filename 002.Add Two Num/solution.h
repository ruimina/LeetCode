class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* l3 = NULL, *solution;
        int flag = 0, sum = 0;
        while(1){
            if(!l1 && !l2) break;
            if(!l1) sum = l2->val + flag;
            else if(!l2) sum = l1->val + flag;
            else sum = l1->val + l2->val + flag;            
            if(!l3) {
                l3 = new ListNode(sum%10);
                solution = l3;
            }
            else{
                l3->next = new ListNode(sum%10);
                l3 = l3->next;
            }
            if(l1) l1 = l1->next;
            if(l2) l2 = l2->next;
            flag = sum/10;
        }
        if(flag>0) l3->next = new ListNode(flag%10);
        return solution;
    }
};