Follow up for "Remove Duplicates":
What if duplicates are allowed at most twice?
For example,
Given sorted array nums = [1,1,1,2,2,3], 
Your function should return length = 5, with the first five elements of nums being 1, 1, 2, 2 and 3. It doesn't matter what you leave beyond the new length. 
给定排序序列，移除超过2个的重复单元。

只需要一个计数器来记录移除后的长度即可。
参考：
        int i = 0;
        for (auto n : nums) {
            if (i <= 1 || n > nums[i-2])  {
                nums[i++] = n;
            }
        }
移除后的数组的倒数第二个不是目前的数，则说明不重复。