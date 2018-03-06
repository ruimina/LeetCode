The gray code is a binary numeral system where two successive values differ in only one bit.
Given a non-negative integer n representing the total number of bits in the code, print the sequence of gray code. A gray code sequence must begin with 0.
For example, given n = 2, return [0,1,3,2]. Its gray code sequence is:
00 - 0
01 - 1
11 - 3
10 - 2

格雷码的定义为序列中连续的两个二进制数只差一位。
求n位的格雷码序列。

用递归，n位的格雷码显然是n-1位格雷码的序列和
n-1位格雷码的序列加2^(n-1)的序列的拼接。
此外，每次只变一位说明后一序列的第一个数是前一
序列的最后一个数加2^(n-1)，每次是用相同的规律变换，
这个变换每次变换的位数是对称的（如121，1213121，高位
的两边是低位的变换）
因此后一个序列除了二进制首位为1，其余位刚好是倒过来
排列的第一个序列。

参考：可以用位运算，不要用2的指数。