Given two sorted integer arrays nums1 and nums2, merge nums2 into nums1 as one sorted array.
给定两个排序好的序列，归并2序列至1中。

从nums1的末尾开始，nums1[i+j+1] = nums1[i]或nums2[j]
可以保证不会覆盖掉原数组并不需要开新空间。