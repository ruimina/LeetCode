Given a collection of integers that might contain duplicates, nums, return all possible subsets (the power set). 
给定可以重复的序列，求所有子集。

对于不能重复的序列的子集，分包含第n个元素和不包含第n
个元素加上剩余n-1个元素的子集。
可以重复时，先排序，分为包含1-m个第n个元素和不包含第
n个元素加上剩余n-m个元素的子集。

参考：没有回溯时不需要用递归，用循环就可以完成，每次
的状态改变只有nums变少和ret变多，都是相对上次而言，循环
能更好的完成任务。