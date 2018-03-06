Given a string containing only digits, restore it by returning all possible valid IP address combinations.
For example:
Given "25525511135", 
return ["255.255.11.135", "255.255.111.35"]. (Order does not matter) 
给定数字串，返回所有可能的IP。

用递归，DFS，递归函数参数为待push的结果ret，已分段字符串
now，剩余未分段字符串left，已分段数n。
每次检测接下来1-3个字符串是否合法，若合法则递归，直到
分段第四次，判断剩下的字符串是否合法。

参考：不用递归，用4次循环。合法条件可以用atoi(s)<=255
&& s[0]!='0'