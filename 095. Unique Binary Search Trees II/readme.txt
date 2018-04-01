Given an integer n, generate all structurally unique BST's (binary search trees) that store values 1...n.
For example,
Given n = 3, your program should return all 5 unique BST's shown below. 
   1         3     3      2      1
    \       /     /      / \      \
     3     2     1      1   3      2
    /     /       \                 \
   2     1         2                 3
生成节点数为n的所有二分搜索树，中序排列。

用递归，传递当前节点的树的节点数和最小值。
循环左子树的节点数为0到n-1，递归生成左右子树。
注意子树为空的情况。