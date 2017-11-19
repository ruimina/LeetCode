Given a set of candidate numbers (C) (without duplicates) and a target number (T), find all unique combinations in C where the candidate numbers sums to T. 
The same repeated number may be chosen from C unlimited number of times. 
Note:
All numbers (including target) will be positive integers.
The solution set must not contain duplicate combinations.
�������ظ����У���target���ҵ����д�������ѡȡ�������
��Ϊtarget����ϣ������ظ���

�õݹ���ݵ�˼�룬�Ȱ�������������ÿ��back()�鿴
���һ��Ԫ�أ��Ƚ����һ��Ԫ�غ�target��������ڵ���
��ֱ��return���������Ϊ�գ���return��֮��ֱ����
����pop_back()��Ľ��target-���һ��Ԫ�صĽ⣬�ֱ�
��Ӧȡ���һ��Ԫ�غͲ�ȡ���һ��Ԫ�أ�ע��pop_back()
��Ҫpush_back()���ϣ�Ҳ���ǻ���
ע��push_back()�ķ���ֵ�ǿգ�Ҫ��back()

�ο���ÿ��ѭ��pos:len��posΪ��ǰ������СԪ�أ��Ѹ�Ԫ��
push���������У���target��ȥ��Ӧֵ���ݹ飬�Ѹ�Ԫ�ش�
����pop_back()��
˼������������У�ÿ�δ�С�����ԣ�������target��
���ݡ��ҵ�˼·��ÿ�δ���һ�������ּӲ���������������
Ȼ��������vector<vector<int>>��ÿ��������push��Ԫ�ء�
�ο����ŵ����ڲ���Ҫÿ�εݹ�ʱ��һ����Ԫ���顣