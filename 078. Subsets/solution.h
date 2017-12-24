class Solution {
private:
    void dfs(vector<int>& nums, vector<vector<int>>& out, vector<int>& list, int m, int n){
        for(int i = m; i < n; i++){
            list.push_back(nums[i]);
            dfs(nums, out, list, i+1, n);
            list.pop_back();
        }
        out.push_back(list);
        return;
    }
    
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> out;
        vector<int> list;
        dfs(nums, out, list, 0, nums.size());
        return out;
    }
};