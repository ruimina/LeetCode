Given a linked list, remove the nth node from the end of list and return its head.
给定链表，删除倒数第n个节点。
用一个queue去存储最后n+1个节点，front()是获得头，
pop()是删除头，返回void。
额外考虑删除头节点的时候，queue.size()==n

用两个指针，p2先右移n，p1,p2在一起移动，直到p2到尾
这是p1的位置就是倒数第n个位置