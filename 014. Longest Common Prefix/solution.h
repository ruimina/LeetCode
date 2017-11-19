class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(), strs.end());
        if(strs.size() == 0) return "";
        string temp1 = *(strs.begin()), temp2 = *(strs.end()-1);
        int i, len = min(temp1.length(), temp2.length());
        for(i = 0; i<len; i++){
            if(temp1[i] != temp2[i]) break;
        }
        return temp1.substr(0,i);
    }
};