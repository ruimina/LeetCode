class Solution {
public:
    string minWindow(string s, string t) {
        if(t.length() == 0) return "";
        map<char, int> mymap;
        map<char, int> countMap;
        for(int i=0;i<t.length();i++){
            mymap[t[i]] = 0;
            if(countMap.find(t[i]) != countMap.end()) countMap[t[i]] ++;
            else countMap[t[i]] = 1;
        }
        int typeNum = mymap.size();
        int num = 0;
        int i=0, j=0, minLen = INT_MAX, minBegin = 0;
        while(1){
            if(num == typeNum){
                if(mymap.find(s[i]) != mymap.end()){
                    mymap[s[i]] --;
                    if(mymap[s[i]] < countMap[s[i]]){
                        num --;
                        if(j-i<minLen){
                            minLen = j-i;
                            minBegin = i;
                        }
                    }
                }
                i++;
            }
            else{
                if(j >= s.length()) break;
                if(mymap.find(s[j]) != mymap.end()){
                    mymap[s[j]] ++;
                    if(mymap[s[j]] == countMap[s[j]]){
                        num ++;
                    }
                }
                j++;
            }
        }
        if(minLen == INT_MAX) return "";
        return s.substr(minBegin, minLen);
    }
};