Given a sorted linked list, delete all nodes that have duplicate numbers, leaving only distinct numbers from the original list. 
For example,
Given 1->2->3->3->4->4->5, return 1->2->5.
Given 1->1->1->2->3, return 2->3. 
������������ɾ���������ظ��Ľڵ㡣

ѭ��q�����q==q->next��������ƶ���ֱ��������ʱ���ж�
�Ƿ�q���ظ��ģ����ظ���ӽ�����

�ο����õݹ顣���head!=head->next���򷵻�head����
head->next=�ݹ�(head->next)
��֮���ҵ���һ��������head�Ľڵ�p�����صݹ�(p)