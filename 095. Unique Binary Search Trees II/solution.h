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
    vector<TreeNode*> myRec(int n, int start) {
        vector<TreeNode*> ret;
        if(n == 0) return ret;
        if(n == 1) {
            TreeNode* temp = new TreeNode(start);
            ret.push_back(temp);
            return ret;
        }
        for(int i = 0; i < n; i++) {
            vector<TreeNode*> left = myRec(i, start);
            vector<TreeNode*> right = myRec(n-1-i, start+i+1);
            for(int j = 0; j < left.size(); j++) {
                for(int z = 0; z < right.size(); z++) {
                    TreeNode* center = new TreeNode(start+i);
                    center->left = left[j];
                    center->right = right[z];
                    ret.push_back(center);
                }
            }
            if(left.size() == 0) {
                for(int z = 0; z < right.size(); z++) {
                    TreeNode* center = new TreeNode(start+i);
                    center->left = NULL;
                    center->right = right[z];
                    ret.push_back(center);
                }
            }
            if(right.size() == 0) {
                for(int j = 0; j < left.size(); j++) {
                    TreeNode* center = new TreeNode(start+i);
                    center->left = left[j];
                    center->right = NULL;
                    ret.push_back(center);
                }
            }
        }
        return ret;
    }
public:
    vector<TreeNode*> generateTrees(int n) {
        vector<TreeNode*> ret;
        ret = myRec(n, 1);
        return ret;
    }
};