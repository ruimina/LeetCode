class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        for(int i=digits.size()-1;i>=0;i--){
            if(digits[i] == 9){
                digits[i] = 0;
            }
            else{
                digits[i] ++;
                break;
            }
        }
        vector<int> out = digits;
        if(digits[0] == 0){
            out[0] = 1;
            out.push_back(0);
        }
        return out;
    }
};