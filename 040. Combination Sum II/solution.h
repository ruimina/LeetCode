class Solution {
    void myRec(vector<int>& candidates, vector<vector<int>>& out, vector<int> ans, int target, int pos){
        if(target == 0){
            out.push_back(ans);
            return;
        }
        for(int i=pos;i<candidates.size();i++){
            if(i>pos && candidates[i] == candidates[i-1]) continue;
            if(target >= candidates[i]){
                ans.push_back(candidates[i]);
                myRec(candidates, out, ans, target-candidates[i], i+1);
                ans.pop_back();
            }
            else return;
        }
        return;
    }
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<vector<int>> out;
        vector<int> ans;
        myRec(candidates, out, ans, target, 0);
        return out;
    }
};