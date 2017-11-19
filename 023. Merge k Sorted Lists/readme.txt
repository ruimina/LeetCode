Merge k sorted linked lists and return it as one sorted list. Analyze and describe its complexity.
归并排序k个已排序链表

每次找到最小元素，对应链表右移，若为空，则从lists中
删除(lists.erase(lists.begin()+index))，直到只有1条
链表，p->next等于它，返回dummy->next

参考答案1：每次将两个链表做merge2list，用类似2分的方法
两两归并后最终归并成整个序列。
参考答案2：用优先队列priority_queue存储lists，定义
类myCompare，实现方法operator() 定义大于操作，可以
自动进行从小到大的排序，每次pop出头再push进头的next。
operator()要定义为public的，而且返回值为bool
