Reverse a linked list from position m to n. Do it in-place and in one-pass. 
For example:
Given 1->2->3->4->5->NULL, m = 2 and n = 4, 
return 1->4->3->2->5->NULL. 
Note:
Given m, n satisfy the following condition:
1 ≤ m ≤ n ≤ length of list. 
给定链表，逆序m到n的节点。

记录要逆序的开头，开头的左边即可。每次逆序保存上一个
节点，下一个节点即可。
要考虑m==n的情况。