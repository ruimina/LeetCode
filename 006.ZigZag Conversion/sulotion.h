class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows<=1) return s;
        vector<string> vec(numRows,"");
        int index = 0;
        bool flag = true;
        for(int i=0;i<s.length();i++){
            vec[index].push_back(s[i]);
            index = flag?index+1:index-1;
            if(index>=numRows-1 || index<=0) flag = !flag;
        }
        string out = "";
        for(int i=0;i<numRows;i++){
            out += vec[i];
        }
        return out;
    }
};