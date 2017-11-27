Find the contiguous subarray within an array (containing at least one number) which has the largest sum. 
求给定序列的最大子序列之和。

用动态规划，计算从每个点开始的最大子串
sum[i]=nums[i]+sum[i+1]>0?sum[i+1]:0