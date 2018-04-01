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
    bool myRec(TreeNode* root, int& depth) {
        if(!root) { 
            depth = 0;
            return true;
        }
        int leftDepth = 0, rightDepth = 0;
        bool flag = myRec(root->left, leftDepth) && myRec(root->right, rightDepth);
        depth = max(leftDepth, rightDepth) + 1;
        if(flag && abs(leftDepth-rightDepth) <= 1) return true;
        return false;
    }
public:
    bool isBalanced(TreeNode* root) {
        int depth = 0;
        return myRec(root, depth);
    }
};