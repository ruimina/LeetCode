Given a matrix of m x n elements (m rows, n columns), return all elements of the matrix in spiral order. 
给定矩阵，以螺旋序输出。

用一个矩阵表示访问过的点，flag表示下一次应该往哪个方向，
如果遇到访问过的点或者越界，则flag++。

参考：用四个变量分别表示四周的边界位置，每次循环到边界，
再改变边界。