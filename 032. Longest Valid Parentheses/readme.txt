Given a string containing just the characters '(' and ')', find the length of the longest valid (well-formed) parentheses substring. 
For "(()", the longest valid parentheses substring is "()", which has length = 2. 
给定括号字符串，找到最长满足规则的括号子串并返回长度。

从右边开始循环，保存从当前开始的最长子串长度。
p[i] = p[j+1] + left*2;
每次找到第一次左括号等于右括号的位置，再加上该位置后
一个位置开始的最长子串长度。

参考：使用堆，先循环字符串，碰到(则push(i)，碰到)，若
堆顶对应(则pop，否则push(额外考虑是否为空)。
堆中存的数，每两个数的间隔是一个符合要求的子串，头和
尾也是符号要求的子串，计算最大即可。要考虑堆为空，即
整个字符串符合要求。

