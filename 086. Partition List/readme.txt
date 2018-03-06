Given a linked list and a value x, partition it such that all nodes less than x come before nodes greater than or equal to x. 
You should preserve the original relative order of the nodes in each of the two partitions. 
For example,
Given 1->4->3->2->5->2 and x = 3,
return 1->2->2->4->3->5. 
给定链表和数x，用x划分链表。

用两个left_head和right_head记录小的链表和大的链表。
循环链表把节点加在两个链表上。最后把两个链表相连。
注意：right->next=NULL要记得加，否则如果右链表的
最后一个节点不是原本的最后一个节点，会形成环。