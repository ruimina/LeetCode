Write an efficient algorithm that searches for a value in an m x n matrix. This matrix has the following properties:

Integers in each row are sorted from left to right.
The first integer of each row is greater than the last integer of the previous row.
给定排序矩阵，判断是否target在矩阵中。

用两次二分法即可，需额外考虑如果每行只有一个元素。