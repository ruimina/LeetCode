class Solution {
public:
    string longestPalindrome(string s) {
        int len = s.length();
        int maxlen = 0;
        string palinstr;
        for(int i=0;i<len;i++){
            int m = 0;
            while(i-m>=0 && i+m<len && s[i-m] == s[i+m]) m++;
            int tmplen = m*2-1;
            if(tmplen>maxlen){
                maxlen = tmplen;
                palinstr = s.substr(i-m+1,tmplen);
            }
            m = 0;
            while(i-m>=0 && i+m+1<len && s[i-m] == s[i+m+1]) m++;
            tmplen = m*2;
            if(tmplen>maxlen){
                maxlen = tmplen;
                palinstr = s.substr(i-m+1,tmplen);
            }
        }
        return palinstr;
    }
};