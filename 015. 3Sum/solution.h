class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int len = nums.size();
        vector<vector<int>> out;
        for(int i = 0; i<len-2; i++){
            while(i>0 && nums[i] == nums[i-1]) i++;
            int j = i+1, k = len-1, target = -nums[i];
            while(j<k){
                if(nums[j]+nums[k]<target) {
                    j++;         
                    while(nums[j-1] == nums[j]) j++;
                }
                else if(nums[j]+nums[k]>target) {
                    k--;
                    while(k<len-1 && nums[k+1] == nums[k]) k--;
                }
                else {
                    vector<int> temp;
                    temp.push_back(-target);
                    temp.push_back(nums[j++]);
                    temp.push_back(nums[k--]);
                    out.push_back(temp);   
                    while(nums[j-1] == nums[j]) j++;
                    while(k<len-1 && nums[k+1] == nums[k]) k--;
                }
            }
        }
        return out;
    }
};