Given a collection of candidate numbers (C) and a target number (T), find all unique combinations in C where the candidate numbers sums to T. 
Each number in C may only be used once in the combination. 
Note:
All numbers (including target) will be positive integers.
The solution set must not contain duplicate combinations.

给定序列和target，求元组和为target，序列中的每个数最多
用一次，答案不能重复。

同Combination Sum递归回溯，考虑到不能重复，要改动的地方
是递归时pos位置+1，以及循环时如果非开头，且当前元素等于
上一个元素，则跳过，因为循环到这里说明前面的元素都没有使用。