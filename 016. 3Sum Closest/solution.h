class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int len = nums.size();
        int out, min_dist=INT_MAX;
        int sum, dist;
        for(int i = 0; i<len-2; i++){
            while(i>0 && nums[i] == nums[i-1]) i++;
            int j = i+1, k = len-1, target_2 = target-nums[i];
            while(j<k){
                sum = nums[i]+nums[j]+nums[k];
                dist = sum-target;
                dist = dist>=0?dist:-dist;
                if(dist<min_dist){
                    min_dist = dist;
                    out = sum;
                }
                if(nums[j]+nums[k]<target_2) {
                    j++;
                    while(nums[j-1] == nums[j]) j++;
                }
                else if(nums[j]+nums[k]>target_2) {
                    k--;
                    while(k<len-1 && nums[k+1] == nums[k]) k--;
                }
                else {
                    return target;
                }
            }
        }
        return out;
    }
};