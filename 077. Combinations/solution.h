class Solution {
public:
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> out;
        if(n < k) return out;
        if(n == k){
            vector<int> temp(n);
            for(int i = 0; i < n; i++){
                temp[i] = i + 1;
            }
            out.push_back(temp);
            return out;
        }
        if(k == 1){
            out.resize(n);
            for(int i = 0; i < n; i++){
                out[i] = vector<int>(1, i+1);
            }
            return out;
        }
        vector<vector<int>> with_n = combine(n-1, k-1);
        vector<vector<int>> without_n = combine(n-1, k);
        for(int i=0; i<with_n.size(); i++){
            with_n[i].push_back(n);
        }
        out.insert(out.end(), with_n.begin(), with_n.end());
        out.insert(out.end(), without_n.begin(), without_n.end());
        return out;
    }
};