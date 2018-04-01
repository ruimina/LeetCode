Pick One

Given a binary tree, return the level order traversal of its nodes' values. (ie, from left to right, level by level).
For example:
Given binary tree [3,9,20,null,null,15,7],
    3
   / \
  9  20
    /  \
   15   7

return its level order traversal as:
[
  [3],
  [9,20],
  [15,7]
]

给定二叉树，求层级遍历。

用队列保存每层的节点，循环每次把该层节点的val输出，并
更新为下一层的节点。