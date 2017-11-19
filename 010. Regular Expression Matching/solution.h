class Solution {
public:
    bool isMatch(string s, string p) {
        if(p.length() == 0) return s.length() == 0;
        else if(p.length() == 1) return s.length() == 1 && (s[0] == p[0] || p[0] == '.');
        else if(p[1] == '*'){
            return isMatch(s,p.substr(2)) || (s.length() > 0 && (s[0] == p[0] || p[0] == '.') && isMatch(s.substr(1),p));
        }
        else 
        {
            return s.length() > 0 && (s[0] == p[0] || p[0] == '.') && isMatch(s.substr(1), p.substr(1));
        }
    }
};