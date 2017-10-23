class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<string> myset;
        if(digits.length() == 0) return myset;
        myset.push_back("");
        map<char,string> mymap;
        mymap['0'] = " ";
        mymap['1'] = " ";
        mymap['2'] = "abc";
        mymap['3'] = "def";
        mymap['4'] = "ghi";
        mymap['5'] = "jkl";
        mymap['6'] = "mno";
        mymap['7'] = "pqrs";
        mymap['8'] = "tuv";
        mymap['9'] = "wxyz";
        int len = digits.length();
        for(int i = 0; i<len; i++){
            string letter = mymap[digits[i]];
            vector<string> temp;
            for(vector<string>::iterator iter=myset.begin(); iter!=myset.end(); iter++){
                for(int j=0; j<letter.length(); j++){
                    temp.push_back(*iter+letter[j]);
                }
            }
            myset = temp;
        }
        return myset;
    }
};