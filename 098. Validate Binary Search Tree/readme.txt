Given a binary tree, determine if it is a valid binary search tree (BST). 
Assume a BST is defined as follows: 
The left subtree of a node contains only nodes with keys less than the node's key.
The right subtree of a node contains only nodes with keys greater than the node's key.
Both the left and right subtrees must also be binary search trees.
二分搜索树的定义为左子树的所有节点小于根节点，
右子树的所有节点大于根节点，判断是否是二分搜索树。

递归，每次额外传递当前树的最大值和最小值，每次递归
过程中判断根是否大于左子树的最大值和右子树的最小值，
以及左右子树是否合法。