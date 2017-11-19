class Solution {
private:
    bool myRec(string& s, string& p, int m, int n){
        int len1 = s.length(), len2 = p.length();
        if(n >= len2){
            if(m >= len1) return true;
            else return false;
        }
        if(m >= len1){
            if(p[n] != '*') return false;
            return myRec(s,p,m,n+1);
        }
        if(p[n] == '*'){
            int k = 1;
            while(n+k<len2 && p[n+k] == '*') k++;
            return myRec(s,p,m,n+k) || myRec(s,p,m+1,n);
        }
        if(p[n] == s[m] || p[n] == '?') return myRec(s,p,m+1,n+1);
        return false;
    }    
public:
    bool isMatch(string s, string p) {
        return myRec(s,p,0,0);
    }
};
too slow for long string with many *

ref£º
class Solution {
public:
    bool isMatch(string s, string p) {
        char* ss = &(s[0]);
        char* p1 = ss;
        char* p2 = &(p[0]);
        char* star = NULL;
        while(*p1){
            if(*p2 == '?' || *p2 == *p1){
                p1++;
                p2++;
            }
            else if(*p2 == '*'){
                star = p2++;
                ss = p1;
            }
            else if(star){
                p2 = star + 1;
                p1 = ++ss;
            }
            else return false;
        }
        while(*p2 == '*') p2++;
        return !*p2;
    }
};