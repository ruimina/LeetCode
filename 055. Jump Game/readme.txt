Given an array of non-negative integers, you are initially positioned at the first index of the array. 
Each element in the array represents your maximum jump length at that position. 
Determine if you are able to reach the last index. 
给定序列，每个数是当前可以跳的最大距离，判断是否能跳到终点。

贪心法，下一步取下一步的下一步能走最远的点。

参考：设变量maxReach为能走到的最远的点，从第一个点开始循环，
计算能走得最远的点，如果maxReach<i则说明之前的点无法到达该点，
可以判断不能到达。