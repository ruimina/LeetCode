Given an array of integers sorted in ascending order, find the starting and ending position of a given target value.
Your algorithm's runtime complexity must be in the order of O(log n).
If the target is not found in the array, return [-1, -1].
��������õ����к�target������target��Ӧ�����䡣

���ö����ҵ���һ��target��λ�ã����ö��ַ���[left,middle]�ҵ�
��߲���target����ǰ��target��λ�á���[middle,right]�ҵ��ұ�
����target����ǰ��target��λ�á�
ע��vector����push_back()

�ο���C++11������{a,b,c,...}��ʼ��vector
