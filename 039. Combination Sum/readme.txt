Given a set of candidate numbers (C) (without duplicates) and a target number (T), find all unique combinations in C where the candidate numbers sums to T. 
The same repeated number may be chosen from C unlimited number of times. 
Note:
All numbers (including target) will be positive integers.
The solution set must not contain duplicate combinations.
给定无重复序列，和target，找到所有从序列中选取数，相加
和为target的组合，不能重复。

用递归回溯的思想，先把序列升序排序，每次back()查看
最后一个元素，比较最后一个元素和target，如果大于等于
则直接return，如果序列为空，则return。之后分别计算
序列pop_back()后的解和target-最后一个元素的解，分别
对应取最后一个元素和不取最后一个元素，注意pop_back()
后还要push_back()补上，也就是回溯
注意push_back()的返回值是空，要用back()

参考：每次循环pos:len，pos为当前序列最小元素，把该元素
push进答案向量中，把target减去对应值，递归，把该元素从
答案中pop_back()。
思想是引入答案序列，每次从小到大尝试，若超过target则
回溯。我的思路是每次处理一个数，分加不加入答案两种情况，
然后在整个vector<vector<int>>的每个向量中push进元素。
参考的优点在于不需要每次递归时传一个二元数组。