Given two words word1 and word2, find the minimum number of steps required to convert word1 to word2. (each operation is counted as 1 step.) 
You have the following 3 operations permitted on a word: 
a) Insert a character
b) Delete a character
c) Replace a character

���������ʵľ��룬���ÿ���˳�����

�ö�̬�滮�㷨������word1[0:i]��word2[0:j]�ľ��롣
flagΪ�Ƿ�word1[i]��word2[j]���
mymat[i][j] = min(min(mymat[i-1][j], mymat[i][j-1])+1, mymat[i-1][j-1]+flag);