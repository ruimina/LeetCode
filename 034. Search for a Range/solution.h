class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int len = nums.size();
        int left = 0, right = len - 1, middle = 0;
        vector<int> out;
        if(len == 0){
            out.push_back(-1);
            out.push_back(-1);
            return out;
        }
        while(left < right){
            middle = (left + right)/2;
            if(nums[middle] == target) break;
            if(nums[middle] < target) left = middle + 1;
            else right = middle - 1;
        }
        if(nums[middle] != target){
            if(nums[left] == target){
                out.push_back(left);
                out.push_back(left);
            }else{
                out.push_back(-1);
                out.push_back(-1);
            }
            return out;
        }
        int right_temp = middle, left_temp = middle;
        while(left<right_temp){
            middle = (left + right_temp)/2;
            if(nums[middle] != target) left = middle + 1;
            else{
                if(middle == 0 || nums[middle-1] != target){
                    out.push_back(middle);
                    break;
                }
                else right_temp = middle - 1;
            }
        }
        if(left == right_temp) out.push_back(left);
        while(left_temp<right){
            middle = (right + left_temp)/2;
            if(nums[middle] != target) right = middle -1;
            else{
                if(middle == len -1 || nums[middle+1] != target){
                    out.push_back(middle);
                    break;
                }
                else left_temp = middle + 1;
            }
        }
        if(right == left_temp) out.push_back(right);
        return out;
    }
};