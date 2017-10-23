class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int len = nums.size();
        vector<vector<int>> out;
        for(int i = 0; i<len-3; i++){
            while(i>0 && nums[i] == nums[i-1]) i++;
            for(int n = i+1; n<len-2; n++){
                while(n>i+1 && nums[n] == nums[n-1]) n++;
            int j = n+1, k = len-1, target_1 = target -nums[i] -nums[n];
            while(j<k){
                if(nums[j]+nums[k]<target_1) {
                    j++;         
                    while(nums[j-1] == nums[j]) j++;
                }
                else if(nums[j]+nums[k]>target_1) {
                    k--;
                    while(k<len-1 && nums[k+1] == nums[k]) k--;
                }
                else {
                    vector<int> temp;
                    temp.push_back(nums[i]);
                    temp.push_back(nums[n]);
                    temp.push_back(nums[j++]);
                    temp.push_back(nums[k--]);
                    out.push_back(temp);   
                    while(nums[j-1] == nums[j]) j++;
                    while(k<len-1 && nums[k+1] == nums[k]) k--;
                }
            }
            }
        }
        return out;
    }
};