Given a binary tree and a sum, find all root-to-leaf paths where each path's sum equals the given sum. 
For example:
Given the below binary tree and sum = 22, 
              5
             / \
            4   8
           /   / \
          11  13  4
         /  \    / \
        7    2  5   1
return
[
   [5,4,11,2],
   [5,8,4,5]
]

给定二叉树，求所有根到叶子结点的路径的和为给定值的路径。

用递归，额外保存当前路径和结果，当当前路径满足时，则把
当前路径加入结果中。记得当前节点push进路径，结束时
要回溯，否则路径会一直增长下去，每次递归中有加入和删除的
操作，则函数结束时一定不会增加元素。