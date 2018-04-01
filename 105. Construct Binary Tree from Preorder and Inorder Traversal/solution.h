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
    TreeNode* myRec(vector<int>& preorder, vector<int>& inorder, int preBegin, int inBegin, int len) {
        if(len == 0) return NULL;
        TreeNode *root = new TreeNode(preorder[preBegin]);
        int i = inBegin;
        int leftLen = 0, rightLen = 0;
        while(inorder[i] != root->val) {
            i ++;
            leftLen ++;
        }
        rightLen = len - 1 - leftLen;
        root->left = myRec(preorder, inorder, preBegin + 1, inBegin, leftLen);
        root->right = myRec(preorder, inorder, preBegin + 1 + leftLen, inBegin + 1 + leftLen, rightLen);
        return root;
    }
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        return myRec(preorder, inorder, 0, 0, preorder.size());
    }
};