class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int len = nums.size();
        if(len == 0) return 0;
        int left = 0, right = len - 1, middle = 0;
        while(left<right){
            middle = (left+right)/2;
            if(nums[middle] == target) return middle;
            if(nums[middle] > target){
                if(middle == 0 || nums[middle-1]<target) return middle;
                else right = middle - 1;
            }else{
                if(middle == len -1 || nums[middle+1]>target) return middle+1;
                else left = middle + 1;
            }
        }
        if(nums[left] >= target) return left;
        else return left+1;
    }
};