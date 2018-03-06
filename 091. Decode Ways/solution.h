class Solution {
public:
    int numDecodings(string s) {
        if(s.length() == 0) return 0;
        int m = 1, n = s[s.length()-1]=='0' ? 0 : 1;
        for(int i = s.length() - 2; i >= 0 ; i--) {
            int temp = n;
            if(s[i] == '0') {
                n = 0;
            } 
            else if(s[i] == '1' || s[i] == '2' && s[i+1] <= '6') {
                n = m + n;
            }
            m = temp;
        }
        return n;
    }
};