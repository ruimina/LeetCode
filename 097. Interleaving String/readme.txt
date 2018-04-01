Given s1, s2, s3, find whether s3 is formed by the interleaving of s1 and s2. 
For example,
Given:
s1 = "aabcc",
s2 = "dbbca", 
When s3 = "aadbbcbcac", return true.
When s3 = "aadbbbaccc", return false. 
判断s3是否是s1和s2的交叉。

首先想到用递归，s3的第一位等于s1或s2的第一位即可递归。
但这样做复杂度太高，同样是有太多重复的计算，比如s3最后
的两位ac是s1和s2的最后一位的交叉，每一次迭代都会计算
一遍。
用动态规划，用一个l1+1 * l2+1的bool矩阵来保存状态。
真值表示s3[:i+j-1]是s1[:i-1]和s2[:j-1]的交叉。则递推
公式为
if(i > 0 && flag[i-1][j] && s1[i-1] == s3[i+j-1] ||
   j > 0 && flag[i][j-1] && s2[j-1] == s3[i+j-1])
flag[i][j] = true;
即交叉只需要判断s3的最后一位是不是s1或s2的最后一位。
以及前面的位数是否满足交叉。和递归是相同的想法，但是
动态规划用数组去保存了状态，每个字串是否满足交叉只需要
计算一次。