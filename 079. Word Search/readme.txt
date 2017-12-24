Given a 2D board and a word, find if the word exists in the grid. 
The word can be constructed from letters of sequentially adjacent cell, where "adjacent" cells are those horizontally or vertically neighboring. The same letter cell may not be used more than once. 

给定二维数组board，在其中寻找是否能连出给定的单词，每个字母只能用一次。

用递归，用一个二维visited数组表示是否已经过。
每次递归中寻找上下左右四个位置是否是合法的路径，
若是则进一步递归。
注意写递归时要记得写停止的条件(word=="")

参考：为了不适用额外的空间visited，可以直接更改board
为word中不会出现的字符，记录是否已经过。