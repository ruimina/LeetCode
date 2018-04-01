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
    void myRec(TreeNode* root, vector<vector<int>>& ret, vector<int>& now, int sum) {
        if(root) {
            now.push_back(root->val);
            if(!root->left && !root->right && root->val == sum) {
                ret.push_back(now);
            }
            myRec(root->left, ret, now, sum - root->val);
            myRec(root->right, ret, now, sum - root->val);
            now.pop_back();
        }
        return;
    }
public:
    vector<vector<int>> pathSum(TreeNode* root, int sum) {
        vector<vector<int>> ret;
        vector<int> now;
        myRec(root, ret, now, sum);
        return ret;
    }
};