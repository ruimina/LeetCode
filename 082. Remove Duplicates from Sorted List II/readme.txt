Given a sorted linked list, delete all nodes that have duplicate numbers, leaving only distinct numbers from the original list. 
For example,
Given 1->2->3->3->4->4->5, return 1->2->5.
Given 1->1->1->2->3, return 2->3. 
给定排序链表，删除所有有重复的节点。

循环q，如果q==q->next，则继续移动，直到不等于时，判断
是否q是重复的，不重复则加进链表。

参考，用递归。如果head!=head->next，则返回head，且
head->next=递归(head->next)
反之，找到第一个不等于head的节点p，返回递归(p)