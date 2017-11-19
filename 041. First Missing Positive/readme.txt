Given an unsorted integer array, find the first missing positive integer. 
给定未排序数组，求第一个未出现的正整数，要求时间复杂度
为O(n)，空间复杂度为O(1)

循环，每次把当前数和当前数应该在的位置的数调换位置，循环
调换这个过程，直到当前数不在1-n内或当前数等于对应位置的数