class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size() == 0) return 0;
        int index = 1, last = nums[0], duplicated_num = 1;
        for(int i = 1; i < nums.size(); i++)
        {
            if(nums[i] == last){
                duplicated_num ++;
                if(duplicated_num <= 2){
                    nums[index++] = nums[i];
                }
            }
            else{
                duplicated_num = 1;
                last = nums[i];
                nums[index++] = nums[i];
            }
        }
        return index;
    }
};