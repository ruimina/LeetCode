class Solution {
public:
    bool canJump(vector<int>& nums) {
        int index = 0;
        while(true){
            if(index + nums[index] >= nums.size()-1) return true;
            if(nums[index] == 0) return false;
            int nextStep = index;
            int maxLen = -1;
            for(int i=nums[index];i>0;i--){
                if(i + nums[index+i] > maxLen){
                    nextStep = i+ index;
                    maxLen = i + nums[index+i];
                }
            }
            index = nextStep;
        }
    }
};