Given a m x n matrix, if an element is 0, set its entire row and column to 0. Do it in place. 
给定数组，如果存在0元素，则把其对应的整行整列都置为0.
使用O(1)的空间复杂度

用边界去存是否该行/列需置零的信息，会少一个位置，
用额外的变量存第一列是否需置零。
在置零的过程需要在最后对边界进行置零。