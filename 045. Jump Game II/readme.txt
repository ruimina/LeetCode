Given an array of non-negative integers, you are initially positioned at the first index of the array. 
Each element in the array represents your maximum jump length at that position. 
Your goal is to reach the last index in the minimum number of jumps. 
给定数组，每次可以跳1：nums[index]步，求最少次数跳到最后元素

用贪心算法，每次循环当前可以跳的点，取下一个可以跳得
最远的点为下一个点，直到达到终点。
说明：因为下一个可以跳的最远的点，可跳的路径会覆盖其他
的点，因此贪心算法总是最优解。