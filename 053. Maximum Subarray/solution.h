class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        vector<int> subSum(nums.size(),0);
        subSum[0] = nums[nums.size()-1];
        int maxSubSum = subSum[0];
        for(int i=1;i<nums.size();i++){
            if(subSum[i-1]>0)
                subSum[i] = nums[nums.size()-1-i] + subSum[i-1];
            else
                subSum[i] = nums[nums.size()-1-i];
            if(subSum[i] > maxSubSum){
                maxSubSum = subSum[i];
            }
        }
        return maxSubSum;
    }
};