You are given a string, s, and a list of words, words, that are all of the same length. Find all starting indices of substring(s) in s that is a concatenation of each word in words exactly once and without any intervening characters. 
�����ַ����͵ȳ��ַ������У���ǰ�����ҵ����߲��ظ��������Ӵ���

��Ҫ��Ҫʵ�ֲ��ظ�����������unordered mapʵ�֣�һ��map��
����word����һ���浱ǰѭ������word��������ߵ�һ��word��count����ǰ�ߣ�
��left+=wl��tdict[S.substr(left,wl)]--;ֱ��������һ����word��
����Ӵ������㹻���������
�ⲿѭ��Ϊi=1:wl���ڲ��൱���û�����