Determine whether an integer is a palindrome. Do this without extra space.
判断一个整数是不是回文数。
循环将该数除以十，余数保存在另一个数中，每次乘10，作为倒序。
当倒序的数超过该数时，判断是否是回文。
要考虑到负数不是，被十整除的数作倒序时前置0失效，因此
被十整除的数要额外考虑，且0被10整除，是回文数。