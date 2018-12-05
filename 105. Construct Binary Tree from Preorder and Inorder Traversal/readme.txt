Given preorder and inorder traversal of a tree, construct the binary tree.
Note:
You may assume that duplicates do not exist in the tree.
For example, given
preorder = [3,9,20,15,7]
inorder = [9,3,15,20,7]
Return the following binary tree:
    3
   / \
  9  20
    /  \
   15   7
给定二叉树的前序遍历和中序遍历，且假设没有重复元素。
构造该二叉树。

前序：中左右，中序：左中右，后序：左右中。
前中后指的是根遍历的顺序。

用递归，前序的第一个元素为根元素，在中序中找到该元素，
左边的元素都是左子树，右边的元素都是右子树，且仍然保持
前序和中序遍历。
一开始想的是每次更新前序和中序遍历数组，但这样开了额外
的空间，可以只传原数组和开始的位置和长度即可。