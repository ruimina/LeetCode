Given n, how many structurally unique BST's (binary search trees) that store values 1...n?
For example,
Given n = 3, there are a total of 5 unique BST's. 
   1         3     3      2      1
    \       /     /      / \      \
     3     2     1      1   3      2
    /     /       \                 \
   2     1         2                 3
求节点数为n的二分搜索树的数量。

用动态规划算法，依次求出<n的所有情况，递推公式为
dp[i] += dp[j] * dp[i-j-1];
不要用递归，递归没有保存求过的解，会重复计算，复杂度高