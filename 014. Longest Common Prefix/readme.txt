Write a function to find the longest common prefix string amongst an array of strings. 
找到一系列字符串的最长公共前缀。
先排序，在对比首位两个字符串。
尾字符串是*(str.end()-1)，要考虑输入的集合为空。