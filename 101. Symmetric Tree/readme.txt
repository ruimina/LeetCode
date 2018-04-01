Given a binary tree, check whether it is a mirror of itself (ie, symmetric around its center).
For example, this binary tree [1,2,2,3,4,4,3] is symmetric: 
    1
   / \
  2   2
 / \ / \
3  4 4  3

But the following [1,2,2,null,3,null,3] is not:
    1
   / \
  2   2
   \   \
   3    3
判断二叉树是否是对称的

判断二叉树的左右子树是否是相互对称的，用递归实现。