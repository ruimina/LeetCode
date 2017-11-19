Given two non-negative integers num1 and num2 represented as strings, return the product of num1 and num2.
给定两个代表数字的字符串，计算两者乘积，作为字符串返回

用列竖式的思路，其中要多考虑竖式相加时要加的列，以及
竖式的顺序。

参考：直接计算每个位置对应的所有乘积的和
再一次循环进行进位，比列竖式简单很多

转成char要这样写：(char)('0'+res[i]);
        