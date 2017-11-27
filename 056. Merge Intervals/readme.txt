Given a collection of intervals, merge all overlapping intervals.
For example,
Given [1,3],[2,6],[8,10],[15,18],
return [1,6],[8,10],[15,18]. 
给定区间序列，求归并后的区间序列。

先对start从小到大排序，如果右大于下一个的开始，则右等于
下一个的结束或者不变，完成一次归并。否则没有重叠，左右
都等于下一个的开始结束。

sort需要的排序函数如果是成员函数，必须是static的。