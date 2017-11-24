You are given an n x n 2D matrix representing an image.
Rotate the image by 90 degrees (clockwise).
Note:
You have to rotate the image in-place, which means you have to modify the input 2D matrix directly. DO NOT allocate another 2D matrix and do the rotation. 
旋转n*n的2D图像，在原矩阵中操作。

把图像分成4块，i=0：len/2,j=i:len-1-i。按规律赋值即可