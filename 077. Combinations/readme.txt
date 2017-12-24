Given two integers n and k, return all possible combinations of k numbers out of 1 ... n. 
给定两个数n和k，返回所有1-n的k个数的组合。

用递归，分带n和不带n两种情况。

参考：用深度优先搜索算法dfs。
每个递归函数中传递答案和当前list。把当前list中加入一个
更大的数进行递归，直到list中元素数量达到k个则加入答案中。