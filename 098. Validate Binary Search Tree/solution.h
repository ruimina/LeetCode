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
    bool myRec(TreeNode* root, int& max, int& min) {
        int now_max = root->val, now_min = root->val;
        max = root->val, min = root->val;
        if(root->left) {
            if(myRec(root->left, now_max, now_min)) {
                if(now_max >= root->val) return false;
                min = now_min;
            }
            else return false;
        }
        if(root->right) {
            if(myRec(root->right, now_max, now_min)) {
                if(now_min <= root->val) return false;
                max = now_max;
            }
            else return false;
        }
        return true;
    }
public:
    bool isValidBST(TreeNode* root) {
        if(!root) return true;
        int max = 0, min = 0;
        return myRec(root, max, min);
    }
};