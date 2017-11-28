class Solution {
public:
    int lengthOfLastWord(string s) {
        char *p = &(s[s.length()-1]);
        char *q = p;
        for(int i=0;i<s.length();i++){
            if(*p != ' ') break;
            else p--;
        }
        char *t = p;
        for(int i=q-p;i<s.length();i++){
            if(*p == ' ') break;
            else p--;
        }
        return t-p;
    }
};