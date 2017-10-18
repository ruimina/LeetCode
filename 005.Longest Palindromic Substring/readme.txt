Given a string s, find the longest palindromic substring in s. You may assume that the maximum length of s is 1000.
Example: 
Input: "babad"

Output: "bab"

Note: "aba" is also a valid answer.

找到给定字符串的最长回文子串。
循环回文子串中心位置，从中心位置向两边扩展。
考虑到回文串的奇偶，分类讨论。
另一种思路是扩展前先由重复字符扩展边界，不必分奇偶。