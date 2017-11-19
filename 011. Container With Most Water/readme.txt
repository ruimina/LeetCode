Given n non-negative integers a1, a2, ..., an, where each represents a point at coordinate (i, ai). n vertical lines are drawn such that the two endpoints of line i is at (i, ai) and (i, 0). Find two lines, which together with x-axis forms a container, such that the container contains the most water. 
Note: You may not slant the container and n is at least 2. 
给定一系列x轴上等距垂直线段，求面积最大的两根线段。
i，j分别代表左边和右边的线段，如果左边小于右边，则
i++，否则j--。巧妙减小了计算量。