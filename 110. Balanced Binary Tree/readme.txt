Given a binary tree, determine if it is height-balanced.
For this problem, a height-balanced binary tree is defined as:
a binary tree in which the depth of the two subtrees of every node never differ by more than 1.
判断给定二叉树是否是平衡的。

用递归，额外传递深度的引用作为返回值。每次判断左右子树
是否是平衡的，且计算左右子树的高度是否差1以内。