Given a sorted linked list, delete all duplicates such that each element appear only once. 
For example,
Given 1->1->2, return 1->2.
Given 1->1->2->3->3, return 1->2->3. 
给定排序链表，删除重复的，保留重复的其中一个。

循环让p->next为第一个不等于的节点即可。
记得讨论头为空，以及结束前p->next=NULL