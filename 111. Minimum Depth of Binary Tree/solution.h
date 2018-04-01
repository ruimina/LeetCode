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
public:
    int minDepth(TreeNode* root) {
        if(!root) return 0;
        int leftLen = minDepth(root->left);
        int rightLen = minDepth(root->right);
        if(leftLen == 0) {
            return rightLen + 1;
        }
        if(rightLen == 0) {
            return leftLen + 1;
        }
        return min(leftLen, rightLen) + 1;
    }
};