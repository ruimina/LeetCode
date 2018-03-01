Follow up for "Remove Duplicates":
What if duplicates are allowed at most twice?
For example,
Given sorted array nums = [1,1,1,2,2,3], 
Your function should return length = 5, with the first five elements of nums being 1, 1, 2, 2 and 3. It doesn't matter what you leave beyond the new length. 
�����������У��Ƴ�����2�����ظ���Ԫ��

ֻ��Ҫһ������������¼�Ƴ���ĳ��ȼ��ɡ�
�ο���
        int i = 0;
        for (auto n : nums) {
            if (i <= 1 || n > nums[i-2])  {
                nums[i++] = n;
            }
        }
�Ƴ��������ĵ����ڶ�������Ŀǰ��������˵�����ظ���