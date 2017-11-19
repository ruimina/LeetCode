class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int len = nums.size();
        for(int i = len-1; i>=0; i--){
            int min = INT_MAX;
            int index = -1;
            int left = nums[i];
            for(int j=i+1;j<len;j++){
                int right = nums[j];
                if(right>left && right<min){
                    min = right;
                    index = j;
                }
            }
            if(index != -1){
                int temp = nums[i];
                nums[i] = nums[index];
                nums[index] = temp;
                sort(nums.begin()+i+1,nums.end());
                return;
            }
        }
        sort(nums.begin(),nums.end());
        return;
    }
};