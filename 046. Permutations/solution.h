class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> out;
        if(nums.size() == 0) return out;
        if(nums.size() == 1){
            out.push_back(nums);
            return out;
        }
        int num = nums.back();
        nums.pop_back();
        vector<vector<int>> lessBack = permute(nums);
        int inSize = lessBack[0].size();
        for(int i=0;i<lessBack.size();i++){
            for(int j=0;j<inSize+1;j++){
                vector<int> temp = lessBack[i];
                temp.insert(temp.begin()+j, num);
                out.push_back(temp);
            }
        }
        return out;
    }
};