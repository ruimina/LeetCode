Given an absolute path for a file (Unix-style), simplify it.
For example,
path = "/home/", => "/home"
path = "/a/./b/../../c/", => "/c"

��unix��ʽ��·����

��stackʵ�֣�ÿ�ζ�ȡ/������ݣ�..��pop������push��
���⿼��stack�ǿ���..�������պ�.�������