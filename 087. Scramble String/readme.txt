Given a string s1, we may represent it as a binary tree by partitioning it to two non-empty substrings recursively. 
Below is one possible representation of s1 = "great": 
    great
   /    \
  gr    eat
 / \    /  \
g   r  e   at
           / \
          a   t
To scramble the string, we may choose any non-leaf node and swap its two children. 
For example, if we choose the node "gr" and swap its two children, it produces a scrambled string "rgeat". 
    rgeat
   /    \
  rg    eat
 / \    /  \
r   g  e   at
           / \
          a   t
We say that "rgeat" is a scrambled string of "great". 
Similarly, if we continue to swap the children of nodes "eat" and "at", it produces a scrambled string "rgtae". 
    rgtae
   /    \
  rg    tae
 / \    /  \
r   g  ta  e
       / \
      t   a
We say that "rgtae" is a scrambled string of "great". 
Given two strings s1 and s2 of the same length, determine if s2 is a scrambled string of s1. 

���������ַ������ö���������ʾ�ַ���������һ���ڵ��
�����ӽڵ�Ϊһ�����ң����Խ�����������ҡ�
��s2�Ƿ�����s1������������bool������

���������Һ�Ҫ��ȵ�ǰ�������������ַ�����Ӧÿ����ĸ
���ִ�����ȡ���vector<int>����¼ÿ����ĸ���ִ�����ע��
vectorʵ����==���ܣ������Լ�дѭ������ȡ�
ѭ���ָ�㣬�ָ��Ҫô�����ַ����������ֶ���Ӧ��ĸ����
������ȣ�Ҫôs1�������ֽ���λ�ú���s2��Ӧ������ĸ����
������ȣ��ſ������Һ���ȡ�
���ŷֳ������ֺ�ݹ飬���ε�˼�롣

�ο�����ֹ����true������Ϊs1==s2���ɣ���ȥһ��ʼ�ж�
���ַ�����ĸ����ͬ�󣬺��治��Ҫ������жϣ���Ϊ�ݹ�
֮����Ȼ���ж�һ�Ρ�