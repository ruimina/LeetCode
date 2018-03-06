class Solution {
public:
    vector<int> grayCode(int n) {
        if(n == 0) return vector<int>(1, 0);
        vector<int> lessOne = grayCode(n-1);
        vector<int> ret = lessOne;
        int num = lessOne.size();
        int base = pow(2, n-1);
        for(int i = 0; i < num; i++) {
            ret.push_back(base + lessOne[num-1-i]);
        }
        return ret;
    }
};