Given a collection of numbers that might contain duplicates, return all possible unique permutations. 
���������ظ������У��������п����������

ͬ46���õ�������Ϻ�������ȥ�ء��������£�
sort(out.begin(), out.end());
out.erase(unique(out.begin(), out.end()), out.end());
unique֮��Ҫerase����Ϊunique�ǰ��ظ��ķŵ�ĩβȥ��

�ο��������򣬵ݹ麯���м��뵱ǰ�����index��ÿ�εݹ�ѭ��
����>=index�����������ͬ�򽻻����ٵݹ�i+1��û��
���ݵĲ�����
���������Ա�֤ÿ�εݹ��У�ÿ�������ܲ��ظ��س����ڵ�ǰ
��λ�ã�
for (int k = i; k < num.size(); k++) {
            if (i == k || num[i] != num[k]) {
                swap(num[i], num[k]);
                recursion(num, i+1);
            }
        }
