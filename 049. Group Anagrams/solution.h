class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> out;
        vector<vector<int>> apearNumList;
        for(int i=0;i<strs.size();i++){
            bool flag = true;
            vector<int> apearNum(26,0);
                for(int z=0;z<strs[i].length();z++){
                    apearNum[strs[i][z]-'a'] ++;
                }
            for(int j=0;j<apearNumList.size();j++){
                if(apearNum == apearNumList[j]){
                    out[j].push_back(strs[i]);
                    flag = false;
                    break;
                }
            }
            if(flag){
                apearNumList.push_back(apearNum);
                out.push_back(vector<string>(1,strs[i]));
            }
        }
        return out;
    }
};

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> out;
        vector<string> strList;
        for(int i=0;i<strs.size();i++){
            bool flag = true;
            for(int j=0;j<strList.size();j++){
                if(strList[j].find(strs[i]) != -1){
                    flag = false;
                    out[j].push_back(strs[i]);
                    break;
                }
            }
            if(flag){
                strList.push_back(strs[i] + strs[i]);
                out.push_back(vector<string>(1,strs[i]));
            }
        }
        return out;
    }
};