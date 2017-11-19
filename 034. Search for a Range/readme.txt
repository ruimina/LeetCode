Given an array of integers sorted in ascending order, find the starting and ending position of a given target value.
Your algorithm's runtime complexity must be in the order of O(log n).
If the target is not found in the array, return [-1, -1].
给定排序好的序列和target，返回target对应的区间。

先用二分找到第一次target的位置，在用二分法从[left,middle]找到
左边不是target，当前是target的位置。从[middle,right]找到右边
不是target，当前是target的位置。
注意vector是用push_back()

参考：C++11可以用{a,b,c,...}初始化vector
