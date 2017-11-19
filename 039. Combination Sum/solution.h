class Solution {
private:
    struct myclass {
        bool operator() (int i,int j) { return (i>j);}
}myobject;
    
    vector<vector<int>> myRec(vector<int>& candidates, int target) {
        vector<vector<int>> out;
        if(candidates.size() == 0) return out;
        int last_num = candidates.back();
        if(last_num > target) return out;
        if(last_num == target){
            out.push_back(vector<int>(1,last_num));
            return out;
        }
        vector<vector<int>> temp1 = myRec(candidates, target-last_num);
        candidates.pop_back();
        vector<vector<int>> temp2 = myRec(candidates, target);
        candidates.push_back(last_num);
        for(int i=0;i<temp1.size();i++){
            vector<int> temp = temp1[i];
            temp.push_back(last_num);
            out.push_back(temp);
        }
        for(int i=0;i<temp2.size();i++){
            vector<int> temp = temp2[i];
            out.push_back(temp);
        }
        return out;
    }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        int len = candidates.size();
        vector<vector<int>> out;
        sort(candidates.begin(), candidates.end(), myobject);
        return myRec(candidates,target);
    }
};