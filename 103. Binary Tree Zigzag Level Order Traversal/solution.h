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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        deque<TreeNode*> level;
        vector<vector<int>> ret;
        if(!root) return ret;
        level.push_back(root);
        bool flag = true; //×óµ½ÓÒ
        while(level.size() > 0) {
            vector<int> temp;
            int num = level.size();
            if(flag) {
                for(int i = 0; i < num; i++) {
                    TreeNode* now = level.front();
                    level.pop_front();
                    temp.push_back(now->val);
                    if(now->left) level.push_back(now->left);
                    if(now->right) level.push_back(now->right);
                }
            }
            else {
                for(int i = 0; i < num; i++) {
                    TreeNode* now = level.back();
                    level.pop_back();
                    temp.push_back(now->val);
                    if(now->right) level.push_front(now->right);
                    if(now->left) level.push_front(now->left);
                }
            }
            ret.push_back(temp);
            flag = !flag;
        }
        return ret;
    }
};