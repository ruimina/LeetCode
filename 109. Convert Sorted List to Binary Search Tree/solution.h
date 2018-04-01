/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
private:
    TreeNode* myRec(ListNode* head, int len) {
        if(len <= 0) return NULL;
        int middle = len/2;
        ListNode* p = head;
        for(int i = 0; i < middle; i++) {
            p = p->next;
        }
        TreeNode* root = new TreeNode(p->val);
        root->left = myRec(head, middle);
        root->right = myRec(p->next, len-middle-1);
        return root;
    }
public:
    TreeNode* sortedListToBST(ListNode* head) {
        int len = 0;
        ListNode* p = head;
        while(p) {
            len ++;
            p = p->next;
        }
        return myRec(head, len);
    }
};