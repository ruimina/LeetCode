Given an array with n objects colored red, white or blue, sort them so that objects of the same color are adjacent, with the colors in the order red, white and blue. 
Here, we will use the integers 0, 1, and 2 to represent the color red, white, and blue respectively. 

给定0,1,2数组，排序。

用i，j从两边往中间夹，如果i遇到0则++，否则
如果nums[i]>nums[j]则交换。j--。
此时0已经都在i的左边。再把j置到末尾。
如果j遇到2则--，否则如果nums[i]>nums[j]则交换。i++。
此时2已经都在j的右边，排序完毕。

参考，用p和q分别记录开头的0序列的右边一个和结尾的2序列
的左边一个。用i循环，如果i遇到0，则与p交换，i++,p++;
如果i遇到2，则与q交换，q--。否则i++。
可以与p交换后i可以++的原因是i的左边必然都小于2.与q
交换后i不可以++是因为可能换了一个0过来。
这样做可以保证0必然都在p的左边，2必然都在q的右边，
i和q重叠，其的左边小于等于1，这样可以完成排序。