Given a set of non-overlapping intervals, insert a new interval into the intervals (merge if necessary).
You may assume that the intervals were initially sorted according to their start times.
给定区间序列，插入一个新的区间到序列中。

先排序，循环，直到new.start小于intervals[i].end。则开始重叠。要考虑如果
intervals[i].start>new.end，则已经没有重叠，要多输出一个。