class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        vector<int> lowest;//记录到i为止所有从右往左看的最低点
        heights.push_back(0);
        int ret = 0;
        for(int i = 0; i < heights.size(); i ++){
            while(lowest.size()>0 && heights[i]<=heights[lowest.back()]){
                int h = heights[lowest.back()];
                lowest.pop_back();
                int left = lowest.size()>0 ? lowest.back(): -1;
                int s = h * (i-left-1);
                if(s > ret) ret = s;
            }
            lowest.push_back(i);
        }
        return ret;
    }
};