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
    TreeNode* myRec(vector<int>& nums, int m, int n) {
        if(m > n) return NULL;
        int middle = (m + n)/2;
        TreeNode* root = new TreeNode(nums[middle]);
        root->left = myRec(nums, m, middle-1);
        root->right = myRec(nums, middle+1, n);
        return root;
    }
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return myRec(nums, 0, nums.size()-1);
    }
};