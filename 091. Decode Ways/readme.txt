A message containing letters from A-Z is being encoded to numbers using the following mapping: 
'A' -> 1
'B' -> 2
...
'Z' -> 26
Given an encoded message containing digits, determine the total number of ways to decode it. 
For example,
Given encoded message "12", it could be decoded as "AB" (1 2) or "L" (12). 
The number of ways decoding "12" is 2. 
��ĸA-Z������Ϊ1-26�������������У�����뷽ʽ������

���ȿ����õݹ飬���ǵ�ǰ�����Ƿ�Ϊ0�����������Ƿ���1-26
�ڣ���numDecodings(s) = numDecodings(s.substr(1)) + 
numDecodings(s.substr(2))�������ַ�ʽ���ظ����㣬���Ӷ�
��O(2^n)���޷����ܡ�
�ö�̬�滮�㷨�����μ���s[i:]�Ľ�����������
n(s[i:]) = n(s[i+1:]) + n(s[i+2:])��
���ܵó����ƹ�ʽ���ҵ��ƹ�ʽһ��Ϊ2ʱ��Ӧ�����ȿ���
��̬�滮������ݹ�����׳����ظ����㣬���Ӹ��Ӷȡ�