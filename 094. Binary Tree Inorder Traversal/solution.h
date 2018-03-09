class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ret;
        if(!root) return ret;
        TreeNode* p = root;
        stack<TreeNode*> s;//记录返回的路径
        while(p) {
            s.push(p);
            p = p->left;
        }
        while(!s.empty()) {
            TreeNode* now = s.top();
            s.pop();
            ret.push_back(now->val);
            p = now->right;
            while(p) {
                s.push(p);
                p = p->left;
            }
        }
        return ret;
    }
};