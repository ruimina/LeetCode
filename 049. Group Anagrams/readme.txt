Given an array of strings, group anagrams together. 
For example, given: ["eat", "tea", "tan", "ate", "nat", "bat"], 
Return: 
[
  ["ate", "eat","tea"],
  ["nat","tan"],
  ["bat"]
]

给定字符串序列，按照字母乱序分组

首先以为题目是需要找到循环字符串分组，思路是把一个字符串
重复两次，则当且仅当等长的循环字符串在前面的长串中，他们
是一个分组。

但是题目的意思是每个字母个数相等即可，因此统计每个词中每个
字母出现次数，按照此分组。

参考：自己的方法实在太慢了，把每个字符串排序，结果相同的
则为同一分组（排序O(nlogn)，求每个字母和O(n)，之所以慢是
因为vector的等于需要O(26)的时间？字符串求等于更快？）
以及分组可以用unordered_map实现，first为排序后的字符串，
secend为vector<string>去存对应的字符串。