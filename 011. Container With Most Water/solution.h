class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0, j=height.size()-1;
        int max_area = 0;
        while(i<j){
            int area;
            if(height[i] < height[j]){
                area = (j-i) * height[i];
                i++;
            }else{
                area = (j-i) * height[j];
                j--;
            }
            max_area = area>max_area?area:max_area;
        }
        return max_area;  
    }
};