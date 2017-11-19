Given a sorted array and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.
给定排序序列和target，找到对以位置或应该插入的位置

用二分法，每次判断是否在(middle-1,middle)或(middle,middle+1)
间，则返回，若跑完了循环，额外判断是否在left左或右。