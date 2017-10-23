Given an array S of n integers, are there elements a, b, c in S such that a + b + c = 0? Find all unique triplets in the array which gives the sum of zero.
给定一个int序列，求和为0的3元素集合。
考虑到排序后的2sum可以用头尾同时向中间靠的方法，
复杂度为O(n)，因此可以先排序，循环第一个数，另两个
数用2sum去求，考虑到去重，每次移位后判断是否和上一
位相同。