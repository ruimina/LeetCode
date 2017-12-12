Implement int sqrt(int x).
Compute and return the square root of x.
x is guaranteed to be a non-negative integer.

求开方，返回整数。

用递归，每次除以4。结果必然是2*mySqrt(x/4)或+1
额外考虑超过int上限。

参考：用l和h表示开方结果的上下限，每次折半查找。