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
    vector<vector<int>> levelOrder(TreeNode* root) {
        queue<TreeNode*> level;
        vector<vector<int>> ret;
        if(!root) return ret;
        level.push(root);
        while(level.size() > 0) {
            vector<int> temp;
            int num = level.size();
            for(int i = 0; i < num; i++) {
                TreeNode* now = level.front();
                level.pop();
                temp.push_back(now->val);
                if(now->left) level.push(now->left);
                if(now->right) level.push(now->right);
            }
            ret.push_back(temp);
        }
        return ret;
    }
};