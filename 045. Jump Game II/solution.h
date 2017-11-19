class Solution {
public:
    int jump(vector<int>& nums) {
        int step = 0, index = 0;
        while(index < nums.size()-1){
            step ++;
            if(index + nums[index] >= nums.size()-1) break;
            int max = 0, next = 0;
            for(int i=0;i<nums[index];i++){
                int sum = i+1+nums[index+i+1];
                if(sum > max){
                    max = sum;
                    next = index + i + 1;
                }
            }
            index = next;
        }
        return step;
    }
};