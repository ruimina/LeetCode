The gray code is a binary numeral system where two successive values differ in only one bit.
Given a non-negative integer n representing the total number of bits in the code, print the sequence of gray code. A gray code sequence must begin with 0.
For example, given n = 2, return [0,1,3,2]. Its gray code sequence is:
00 - 0
01 - 1
11 - 3
10 - 2

������Ķ���Ϊ������������������������ֻ��һλ��
��nλ�ĸ��������С�

�õݹ飬nλ�ĸ�������Ȼ��n-1λ����������к�
n-1λ����������м�2^(n-1)�����е�ƴ�ӡ�
���⣬ÿ��ֻ��һλ˵����һ���еĵ�һ������ǰһ
���е����һ������2^(n-1)��ÿ��������ͬ�Ĺ��ɱ任��
����任ÿ�α任��λ���ǶԳƵģ���121��1213121����λ
�������ǵ�λ�ı任��
��˺�һ�����г��˶�������λΪ1������λ�պ��ǵ�����
���еĵ�һ�����С�

�ο���������λ���㣬��Ҫ��2��ָ����