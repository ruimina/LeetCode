Given a string containing only digits, restore it by returning all possible valid IP address combinations.
For example:
Given "25525511135", 
return ["255.255.11.135", "255.255.111.35"]. (Order does not matter) 
�������ִ����������п��ܵ�IP��

�õݹ飬DFS���ݹ麯������Ϊ��push�Ľ��ret���ѷֶ��ַ���
now��ʣ��δ�ֶ��ַ���left���ѷֶ���n��
ÿ�μ�������1-3���ַ����Ƿ�Ϸ������Ϸ���ݹ飬ֱ��
�ֶε��ĴΣ��ж�ʣ�µ��ַ����Ƿ�Ϸ���

�ο������õݹ飬��4��ѭ�����Ϸ�����������atoi(s)<=255
&& s[0]!='0'