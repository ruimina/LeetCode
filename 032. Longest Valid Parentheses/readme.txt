Given a string containing just the characters '(' and ')', find the length of the longest valid (well-formed) parentheses substring. 
For "(()", the longest valid parentheses substring is "()", which has length = 2. 
���������ַ������ҵ���������������Ӵ������س��ȡ�

���ұ߿�ʼѭ��������ӵ�ǰ��ʼ����Ӵ����ȡ�
p[i] = p[j+1] + left*2;
ÿ���ҵ���һ�������ŵ��������ŵ�λ�ã��ټ��ϸ�λ�ú�
һ��λ�ÿ�ʼ����Ӵ����ȡ�

�ο���ʹ�öѣ���ѭ���ַ���������(��push(i)������)����
�Ѷ���Ӧ(��pop������push(���⿼���Ƿ�Ϊ��)��
���д������ÿ�������ļ����һ������Ҫ����Ӵ���ͷ��
βҲ�Ƿ���Ҫ����Ӵ���������󼴿ɡ�Ҫ���Ƕ�Ϊ�գ���
�����ַ�������Ҫ��

