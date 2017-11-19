Divide two integers without using multiplication, division and mod operator. 
If it is overflow, return MAX_INT. 
实现除法，不能用乘除取余数

先将两数变为正的，再不断对除数*2(左移)，直到超过被除数，
这里要考虑溢出，因此用unsigned int，用被除数减去sum，剩下
的部分用递归计算。此外，考虑INT_MIN/-1是溢出的