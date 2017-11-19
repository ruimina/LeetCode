class Solution {
public:
    int search(vector<int>& nums, int target) {
        int len = nums.size();
        if(len == 0) return -1;
        int left = 0, right = len - 1, middle;
        if(target == nums[len-1]) return len-1;
        if(target == nums[0]) return 0;
        while(left<right-1){
            middle = (left+right)/2;
            if(nums[middle] == target) return middle;
            if(nums[middle] > target){
                if(nums[middle] < nums[left]) right = middle;
                else if(nums[left] > target) left = middle;
                else right = middle;
            }else{
                if(nums[middle] > nums[right]) left = middle; 
                else if(nums[right] < target) right = middle;
                else left = middle;
            }
        }
        return -1;
    }
};