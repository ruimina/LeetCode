Given two words word1 and word2, find the minimum number of steps required to convert word1 to word2. (each operation is counted as 1 step.) 
You have the following 3 operations permitted on a word: 
a) Insert a character
b) Delete a character
c) Replace a character

计算两个词的距离，不用考虑顺序错误。

用动态规划算法，计算word1[0:i]和word2[0:j]的距离。
flag为是否word1[i]与word2[j]相等
mymat[i][j] = min(min(mymat[i-1][j], mymat[i][j-1])+1, mymat[i-1][j-1]+flag);