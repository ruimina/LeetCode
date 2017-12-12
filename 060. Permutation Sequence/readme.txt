The set [1,2,3,…,n] contains a total of n! unique permutations.
求出1-n的第k个排列组合。

把1-9放到vector中，第一个数是第k-1/(n-1)!个数，然后减去这个
数，剩下的同理。