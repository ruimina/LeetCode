Given a collection of numbers that might contain duplicates, return all possible unique permutations. 
给定可能重复的序列，给出所有可能排列组合

同46，得到排列组合后再排序、去重。代码如下：
sort(out.begin(), out.end());
out.erase(unique(out.begin(), out.end()), out.end());
unique之后还要erase，因为unique是把重复的放到末尾去了

参考：先排序，递归函数中加入当前处理的index，每次递归循环
处理>=index的数，如果不同则交换，再递归i+1。没有
回溯的操作。
这样做可以保证每次递归中，每个数都能不重复地出现在当前
的位置？
for (int k = i; k < num.size(); k++) {
            if (i == k || num[i] != num[k]) {
                swap(num[i], num[k]);
                recursion(num, i+1);
            }
        }
