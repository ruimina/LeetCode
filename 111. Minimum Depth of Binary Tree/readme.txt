Given a binary tree, find its minimum depth.
The minimum depth is the number of nodes along the shortest path from the root node down to the nearest leaf node.
给定二叉树，返回最浅叶子结点的深度。

不能直接返回min(leftLen, rightLen) + 1。要考虑其中有0
的情况，此时0的一遍没有叶子结点。直接返回另一边深度+1