Implement next permutation, which rearranges numbers into the lexicographically next greater permutation of numbers. 
If such arrangement is not possible, it must rearrange it as the lowest possible order (ie, sorted in ascending order). 
The replacement must be in-place, do not allocate extra memory. 
�ҵ��������е���һ��������ϡ�

��len-1��ʼѭ��i����Ϊ��ߵ�����ѭ��i:len-1����Ϊ�ұߵ���j��
���j��i���ұߴ���������С�������򽻻�i��j������i�ұߵ�����
�õ��������У����û���ҵ����������������С�

�ο������ұ߿�ʼ���ҵ���һ���Ƚ��ڵ��ұ�ҪС��������Ϊ��ߵ�
�����ٴ��ұ߿�ʼ���ҵ���һ������ߵ���Ҫ���������Ϊ�ұߵ���
�����������ٽ���ߵ����������ұߵ�����reverse��
˼·��࣬�Ľ��ĵط����ڵ�һ�����Խ�������ߵ����ض����ұ�
���ڵ���ҪС�������Ͳ���ѭ���ˡ����⣬��һ�����Խ�������ߵ���
���ұ����б�Ȼ�ǽ������еģ���ô�ҵ��ұ߱����������С�����Ϳ���
ֱ�Ӵ����ұ߿�ʼѭ�����ҵ���break��