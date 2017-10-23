Given an array S of n integers, are there elements a, b, c, and d in S such that a + b + c + d = target? Find all unique quadruplets in the array which gives the sum of target.
给出一个序列中4个和为target的数的集合
思路同3sum，排序，循环前两个数，后两数2sum
可以通过判断4*nums[i]>target来跳过后面的循环，同样可以
减少3sum的循环。