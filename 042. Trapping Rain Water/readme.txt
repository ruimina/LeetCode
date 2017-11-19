Given n non-negative integers representing an elevation map where the width of each bar is 1, compute how much water it is able to trap after raining. 
给定数组代表直方图高度，求能保存的水的体积。

用一个数组去保存存水的端点，从左循环一次，记录每次更新
最大的值和位置，从右循环一次，同左。
循环一次，两个端点之间将存水，求和即可。

参考：循环两次分别计算每个位置的左边最大高度和右边最大高度
每个位置存水量等于左右最大高度较小者减当前高度(若大于0)