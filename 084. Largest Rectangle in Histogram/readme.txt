Given n non-negative integers representing the histogram's bar height where the width of each bar is 1, find the area of largest rectangle in the histogram. 

Above is a histogram where width of each bar is 1, given height = [2,1,5,6,2,3].


The largest rectangle is shown in the shaded area, which has area = 10 unit.
给定序列，把序列画成宽度为1的直方图，求最大的矩形面积。

用一个向量记录到i为止从右往左看的最低点（假设站在溶洞的
右边，看溶洞中能看到的天上的石头），依次计算以看到的
每一个最低点为高，当前点到前一个最低点之间（不包括端点）
围成的矩形的面积，直到当前点高度大于其中的最低点（继续
算下去没有意义，因为把当前点加进长方形是更大的），并同
时去掉这些最低点（因为当前点会挡住它们）。从左到右循环i。
