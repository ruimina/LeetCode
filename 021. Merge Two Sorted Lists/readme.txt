Merge two sorted linked lists and return it as a new list. The new list should be made by splicing together the nodes of the first two lists.
对两个排好序的链表进行排序合并。
额外考虑头节点，考虑链表为空。

使用哑头，p=dummy，每次p->next为新加节点，p=p->next
当一个链表为空时，直接p->next=另一个链表即可。