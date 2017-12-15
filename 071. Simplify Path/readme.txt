Given an absolute path for a file (Unix-style), simplify it.
For example,
path = "/home/", => "/home"
path = "/a/./b/../../c/", => "/c"

简化unix形式的路径。

用stack实现，每次读取/间的内容，..则pop，其他push。
额外考虑stack是空且..和遇到空和.的情况。