class Solution {
private:
    void myRec(vector<vector<int>>& ret, vector<int>& nums) {
        if(nums.size() == 0) { ret.push_back(vector<int>()); return;}
        int n = nums.size();
        int i = n-1;
        int val = nums.back();
        while(i>0 && nums[i] == nums[i-1]) i--;
        int rep = n - i;
        nums.erase(nums.begin()+i, nums.end());
        myRec(ret, nums);
        int m = ret.size();
        for(int i = 0; i < m; i ++)
        {
            vector<int> temp = ret[i];
            for(int i = 0; i < rep; i++) {
                temp.push_back(val);
                ret.push_back(temp);
            }
        }
        return;
    }
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ret;
        myRec(ret, nums);
        return ret;
    }
};