class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        vector<bool> flag(n, false);
        int left_max = INT_MIN, right_max = INT_MIN;
        for(int i=0;i<n;i++){
            if(height[i] >= left_max){
                left_max = height[i];
                flag[i] = true;
            }
        }
        for(int i=n-1;i>=0;i--){
            if(height[i] >= right_max){
                right_max = height[i];
                flag[i] = true;
            }
        }
        int left_index = 0, left_h = 0, sum = 0, out = 0;
        for(int i=0;i<n;i++){
            if(flag[i]){
                if(left_h > height[i]){
                    sum -= (i-left_index-1)*(left_h-height[i]);
                }
                left_h = height[i];
                left_index = i;
                out += sum;
                sum = 0;
            }
            else{
                sum += left_h-height[i];
            }
        }
        return out;
    }
};