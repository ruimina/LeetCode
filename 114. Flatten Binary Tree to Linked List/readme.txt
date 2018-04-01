Given a binary tree, flatten it to a linked list in-place. 
For example,
Given 
         1
        / \
       2   5
      / \   \
     3   4   6

The flattened tree should look like:
   1
    \
     2
      \
       3
        \
         4
          \
           5
            \
             6
把二叉树按前序遍历转成链表。

用递归，中间元素是根，左子树转成链表后插在根后面，左子树
末尾连右子树转成的链表。因此需要子树转成链表后最后一个
节点的信息，作为递归函数的返回值。
注意在判断节点是否存在时，这个节点是否已经被更改过了。