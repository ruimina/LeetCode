Given a list, rotate the list to the right by k places, where k is non-negative.
给定链表，返回链表向右旋转k后的链表。

先用一个指针从头右移k，到index，如果已经到结尾了，则返回移动k%len的长度
再用左右两个指针分别从head和index同时右移，目的是为了
找到倒数第k个元素，再进行拼接即可。