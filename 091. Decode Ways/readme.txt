A message containing letters from A-Z is being encoded to numbers using the following mapping: 
'A' -> 1
'B' -> 2
...
'Z' -> 26
Given an encoded message containing digits, determine the total number of ways to decode it. 
For example,
Given encoded message "12", it could be decoded as "AB" (1 2) or "L" (12). 
The number of ways decoding "12" is 2. 
字母A-Z各编码为1-26，给定编码序列，求解码方式数量。

首先考虑用递归，考虑当前数字是否为0，两个数字是否在1-26
内，则numDecodings(s) = numDecodings(s.substr(1)) + 
numDecodings(s.substr(2))。但这种方式有重复计算，复杂度
是O(2^n)，无法接受。
用动态规划算法，依次计算s[i:]的解码数量，则
n(s[i:]) = n(s[i+1:]) + n(s[i+2:])。
在能得出递推公式，且递推公式一分为2时，应当优先考虑
动态规划，否则递归很容易出现重复计算，增加复杂度。