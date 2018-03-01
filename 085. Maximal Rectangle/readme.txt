Given a 2D binary matrix filled with 0's and 1's, find the largest rectangle containing only 1's and return its area.

For example, given the following matrix:

1 0 1 0 0
1 0 1 1 1
1 1 1 1 1
1 0 0 1 0
Return 6.

给定2D矩阵，找出最大的全为1的矩形。

从每行依次从下往上看，记录能看到的0的行，计算每列对应的高度，用84题的算法
计算出以每行为底的最大矩形面积。求最小即可。

参考：依次以每行为矩阵的底，height(i,j)表示以第i行为第，第j列的高度。
left(i,j)表示以i为底，用第j列的高度往左扩展矩形的边界。
right(i,j)表示以j为底，用第j列的高度往右扩展矩形的边界。
从左循环计算left(i,j)，cur_left表示最后一个0的右边一个，则
left(i,j)=max(left(i-1,j),cur_left)。若遇到i,j为0则left[j]=0重置。
right(i,j)的计算同理。理由是如果上一行能扩展到那个位置，则下一行除非
扩展路径上有0，则也能扩展到同样的位置。left(i,j)也能理解为从i行j列往
上看的第一个0开始，每一行往左看最近的0的位置。
复杂度O(n^2)