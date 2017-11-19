Given n pairs of parentheses, write a function to generate all combinations of well-formed parentheses.
给定数字n，生成所有符合要求的n个括号对

用map<string, pair<int,int>>保存，每次判断左括号是否
到了n，左-右是否大于0.循环2n次，每次在上次基础上扩展
1或2份。

参考答案：循环时每次增加的字符串为(x)y，其中x,y为符合
题目的子问题，长度和为n-1.动态规划算法。
证明：右括号为第一次左-右等于0的位置，则有括号的右边
必然满足题目，括号中间也必然满足题目。