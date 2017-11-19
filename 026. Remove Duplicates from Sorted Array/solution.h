class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int num = 0, i, len = nums.size(), temp = 0;
        for(i = 0;i<len;i++){
            int temp_cur = nums[i];
            if(i == 0) num++;
            else if(temp_cur!=temp) nums[num++] = temp_cur;
            temp = temp_cur;
        }
        //nums.erase(nums.begin()+num+1, nums.end());
        return num;
    }
};