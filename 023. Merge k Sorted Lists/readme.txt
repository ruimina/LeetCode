Merge k sorted linked lists and return it as one sorted list. Analyze and describe its complexity.
�鲢����k������������

ÿ���ҵ���СԪ�أ���Ӧ�������ƣ���Ϊ�գ����lists��
ɾ��(lists.erase(lists.begin()+index))��ֱ��ֻ��1��
����p->next������������dummy->next

�ο���1��ÿ�ν�����������merge2list��������2�ֵķ���
�����鲢�����չ鲢���������С�
�ο���2�������ȶ���priority_queue�洢lists������
��myCompare��ʵ�ַ���operator() ������ڲ���������
�Զ����д�С���������ÿ��pop��ͷ��push��ͷ��next��
operator()Ҫ����Ϊpublic�ģ����ҷ���ֵΪbool
