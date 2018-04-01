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
    TreeNode* myRec(vector<int>& inorder, vector<int>& postorder, int inBegin, int postBegin, int len) {
        if(len == 0) return NULL;
        TreeNode *root = new TreeNode(postorder[postBegin+len-1]);
        int i = inBegin;
        int leftLen = 0, rightLen = 0;
        while(inorder[i] != root->val) {
            i ++;
            leftLen ++;
        }
        rightLen = len - 1 - leftLen;
        root->left = myRec(inorder, postorder, inBegin, postBegin, leftLen);
        root->right = myRec(inorder, postorder, inBegin + 1 + leftLen, postBegin + leftLen, rightLen);
        return root;
    }
public:
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        return myRec(inorder, postorder, 0, 0, inorder.size());
    }
};