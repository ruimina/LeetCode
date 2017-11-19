You are given a string, s, and a list of words, words, that are all of the same length. Find all starting indices of substring(s) in s that is a concatenation of each word in words exactly once and without any intervening characters. 
给定字符串和等长字符串序列，在前者中找到后者不重复的完整子串。

主要需要实现不重复且完整，用unordered map实现，一个map存
所有word，另一个存当前循环已有word，如果后者的一个word的count超过前者，
则left+=wl，tdict[S.substr(left,wl)]--;直到遇到另一个该word。
如果子串长度足够，则输出。
外部循环为i=1:wl，内部相当于用滑窗。