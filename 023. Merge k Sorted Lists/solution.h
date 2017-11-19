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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        int len = lists.size();
        if(len == 0) return NULL;
        if(len == 1) return lists[0];
        for(vector<ListNode*>::iterator iter=lists.begin(); iter!=lists.end(); iter++){
            if(*iter == NULL) {
                lists.erase(iter);
                return mergeKLists(lists);
            }
        }
        ListNode* dummy = new ListNode(-1);
        ListNode* p = dummy;
        while(1){
            if(len <= 1){
                p->next = lists[0];
                break;
            }
            int index = -1;
            int min = INT_MAX;
            for(int i=0; i<len; i++){
                if(lists[i]->val < min){
                    index = i;
                    min = lists[i]->val;
                }
            }
            p->next = lists[index];
            lists[index] = lists[index]->next;
            p = p->next;
            if(lists[index] == NULL){
                lists.erase(lists.begin()+index);
                len--;
            }
        }
        return dummy->next;
    }
};

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
class MyCompare{
public://注意这里和下面的bool
    bool operator() (ListNode* a, ListNode* b) const
    {
        return a->val > b->val;
    }  
};
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        int len = lists.size();
        if(len == 0) return NULL;
        ListNode* dummy = new ListNode(-1);
        ListNode* p = dummy;
        priority_queue<ListNode*, vector<ListNode*>, MyCompare> pq;
        for(int i=0; i<len; i++){
            if(lists[i])
                pq.push(lists[i]);
        }
        if(pq.size() == 0) return NULL;//注意
        while(pq.size()>1){
            ListNode* temp = pq.top();
            p->next = temp;
            p = temp;
            temp = temp->next;
            pq.pop();
            if(temp) pq.push(temp);
        }
        p->next = pq.top();
        return dummy->next;
    }
};