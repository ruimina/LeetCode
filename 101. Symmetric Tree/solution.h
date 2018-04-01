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
    bool isSymTree(TreeNode* root1, TreeNode* root2) {
        if(!root1 && !root2) return true;
        if(!root1 || !root2) return false;
        if(root1->val == root2->val) {
            return isSymTree(root1->left, root2->right) && isSymTree(root1->right, root2->left);
        }
        return false;
    }
public:
    bool isSymmetric(TreeNode* root) {
        if(!root) return true;
        return isSymTree(root->left, root->right);
    }
};