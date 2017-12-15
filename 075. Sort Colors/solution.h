class Solution {
public:
    void sortColors(vector<int>& nums) {
        int i=0, j=nums.size()-1;
        while(i<j){
            if(nums[i] == 0) i++;
            else{
                if(nums[i] > nums[j]){
                    int temp = nums[j];
                    nums[j] = nums[i];
                    nums[i] = temp;
                }
                j--;
            }
        }
        j=nums.size()-1;
        while(i<j){
            if(nums[j] == 2) j--;
            else{
                if(nums[i] > nums[j]){
                    int temp = nums[j];
                    nums[j] = nums[i];
                    nums[i] = temp;
                }
                i++;
            }
        }
        return ;
    }
};