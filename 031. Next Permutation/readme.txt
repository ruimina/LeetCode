Implement next permutation, which rearranges numbers into the lexicographically next greater permutation of numbers. 
If such arrangement is not possible, it must rearrange it as the lowest possible order (ie, sorted in ascending order). 
The replacement must be in-place, do not allocate extra memory. 
找到给定序列的下一个排列组合。

从len-1开始循环i，作为左边的数，循环i:len-1，作为右边的数j，
如果j是i的右边大于它且最小的数，则交换i，j，排序i右边的数。
得到给定序列，如果没有找到，则排序整个序列。

参考：从右边开始，找到第一个比紧邻的右边要小的数，作为左边的
数，再从右边开始，找到第一个比左边的数要大的数，作为右边的数
交换两数，再将左边的数的所有右边的序列reverse。
思路差不多，改进的地方在于第一个可以交换的左边的数必定比右边
紧邻的数要小，这样就不用循环了。另外，第一个可以交换的左边的数
的右边序列必然是降序排列的，那么找到右边比它大的且最小的数就可以
直接从最右边开始循环，找到则break。