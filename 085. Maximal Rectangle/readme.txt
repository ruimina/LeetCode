Given a 2D binary matrix filled with 0's and 1's, find the largest rectangle containing only 1's and return its area.

For example, given the following matrix:

1 0 1 0 0
1 0 1 1 1
1 1 1 1 1
1 0 0 1 0
Return 6.

����2D�����ҳ�����ȫΪ1�ľ��Ρ�

��ÿ�����δ������Ͽ�����¼�ܿ�����0���У�����ÿ�ж�Ӧ�ĸ߶ȣ���84����㷨
�������ÿ��Ϊ�׵����������������С���ɡ�

�ο���������ÿ��Ϊ����ĵף�height(i,j)��ʾ�Ե�i��Ϊ�ڣ���j�еĸ߶ȡ�
left(i,j)��ʾ��iΪ�ף��õ�j�еĸ߶�������չ���εı߽硣
right(i,j)��ʾ��jΪ�ף��õ�j�еĸ߶�������չ���εı߽硣
����ѭ������left(i,j)��cur_left��ʾ���һ��0���ұ�һ������
left(i,j)=max(left(i-1,j),cur_left)��������i,jΪ0��left[j]=0���á�
right(i,j)�ļ���ͬ�������������һ������չ���Ǹ�λ�ã�����һ�г���
��չ·������0����Ҳ����չ��ͬ����λ�á�left(i,j)Ҳ�����Ϊ��i��j����
�Ͽ��ĵ�һ��0��ʼ��ÿһ�����������0��λ�á�
���Ӷ�O(n^2)