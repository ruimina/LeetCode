Given an array with n objects colored red, white or blue, sort them so that objects of the same color are adjacent, with the colors in the order red, white and blue. 
Here, we will use the integers 0, 1, and 2 to represent the color red, white, and blue respectively. 

����0,1,2���飬����

��i��j���������м�У����i����0��++������
���nums[i]>nums[j]�򽻻���j--��
��ʱ0�Ѿ�����i����ߡ��ٰ�j�õ�ĩβ��
���j����2��--���������nums[i]>nums[j]�򽻻���i++��
��ʱ2�Ѿ�����j���ұߣ�������ϡ�

�ο�����p��q�ֱ��¼��ͷ��0���е��ұ�һ���ͽ�β��2����
�����һ������iѭ�������i����0������p������i++,p++;
���i����2������q������q--������i++��
������p������i����++��ԭ����i����߱�Ȼ��С��2.��q
������i������++����Ϊ���ܻ���һ��0������
���������Ա�֤0��Ȼ����p����ߣ�2��Ȼ����q���ұߣ�
i��q�ص���������С�ڵ���1�����������������