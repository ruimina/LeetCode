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
    TreeNode* myRec(TreeNode* root) {
        if(!root) return NULL;
        if(!root->left && !root->right) return root;
        TreeNode* left = myRec(root->left);
        TreeNode* right = myRec(root->right);
        TreeNode* temp = root->right;
        if(root->left) {
            root->right = root->left;
            root->left = NULL;
            left->right = temp;
        }
        if(!right) return left;
        return right;
    }
public:
    void flatten(TreeNode* root) {
        myRec(root);
    }
};