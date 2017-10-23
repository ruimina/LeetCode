Given a string containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.
The brackets must close in the correct order, "()" and "()[]{}" are all valid but "(]" and "([)]" are not.
给定字符串，判断括号是否正确。
用stack，碰到左括号push，右括号先判断是否为空，再判断
top()是不是对应的左括号。