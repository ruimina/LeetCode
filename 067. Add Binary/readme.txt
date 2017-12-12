Given two binary strings, return their sum (also a binary string). 
For example,
a = "11"
b = "1"
Return "100". 

给定两个字符串表示的二进制数，求和。

从末位相加，考虑进位。额外考虑加完后的进位。

string不能直接由char转

可以用下式在字符串到达末尾的情况也可以通用。
c += i >= 0 ? a[i --] - '0' : 0;