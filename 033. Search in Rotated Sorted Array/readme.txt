Suppose an array sorted in ascending order is rotated at some pivot unknown to you beforehand.
(i.e., 0 1 2 4 5 6 7 might become 4 5 6 7 0 1 2).
You are given a target value to search. If found in the array return its index, otherwise return -1.
You may assume no duplicate exists in the array.
给定排序但旋转过的序列，找到target的位置

同样用二分法，但每次是left=middle还是right=middle需要
分情况考虑，要考虑最高点的位置、中点位置、target位置的
相对关系（即大小关系），共6类情况分类讨论。

参考：二分法每次left=middle+1，right=middle-1，
循环left<right，结束后额外考虑left=target。