Given a roman numeral, convert it to an integer.
Input is guaranteed to be within the range from 1 to 3999.
罗马数字转int
检查当前数字是否比下一个数字小，是的则减去，否则加上。
用map去存罗马数字对应的数字，用静态变量可能更快。