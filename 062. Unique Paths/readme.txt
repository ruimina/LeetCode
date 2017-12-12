A robot is located at the top-left corner of a m x n grid (marked 'Start' in the diagram below).
The robot can only move either down or right at any point in time. The robot is trying to reach the bottom-right corner of the grid (marked 'Finish' in the diagram below).
How many possible unique paths are there?

每次只能往左往下走，从m,n到1,1有多少种走法？

用动态规划算法，用一个m*n的矩阵去保存走法数量.
m[i][j]=m[i-1][j]+m[i][j-1]