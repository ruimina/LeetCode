You are climbing a stair case. It takes n steps to reach to the top.
Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top? 
爬n阶楼梯，每次可以爬1或者2层，有多少种爬法。

steps[i] = steps[i-1] + steps[i-2];
动态规划即可