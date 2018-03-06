Given a string s1, we may represent it as a binary tree by partitioning it to two non-empty substrings recursively. 
Below is one possible representation of s1 = "great": 
    great
   /    \
  gr    eat
 / \    /  \
g   r  e   at
           / \
          a   t
To scramble the string, we may choose any non-leaf node and swap its two children. 
For example, if we choose the node "gr" and swap its two children, it produces a scrambled string "rgeat". 
    rgeat
   /    \
  rg    eat
 / \    /  \
r   g  e   at
           / \
          a   t
We say that "rgeat" is a scrambled string of "great". 
Similarly, if we continue to swap the children of nodes "eat" and "at", it produces a scrambled string "rgtae". 
    rgtae
   /    \
  rg    tae
 / \    /  \
r   g  ta  e
       / \
      t   a
We say that "rgtae" is a scrambled string of "great". 
Given two strings s1 and s2 of the same length, determine if s2 is a scrambled string of s1. 

给定两个字符串，用二叉树来表示字符串，交换一个节点的
两个子节点为一次扰乱，可以进行任意次扰乱。
求s2是否能用s1的扰乱来表达的bool函数。

分析：扰乱后要相等的前提条件是两个字符串对应每个字母
出现次数相等。用vector<int>来记录每个字母出现次数，注意
vector实现了==功能，不用自己写循环来相等。
循环分割点，分割后要么两个字符串的两部分都对应字母出现
次数相等，要么s1的两部分交换位置后与s2对应部分字母出现
次数相等，才可能扰乱后相等。
接着分成两部分后递归，分治的思想。

参考：终止返回true的条件为s1==s2即可，除去一开始判断
两字符串字母数相同后，后面不需要额外的判断，因为递归
之后自然会判断一次。