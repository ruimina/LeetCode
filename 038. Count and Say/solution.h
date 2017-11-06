class Solution {
private:
    string myRead(string s){
        int len = s.length();
        char repeatNum = '1';
        string out = "";
        for(int i=0;i<len;i++){
            if(i<len-1 && s[i+1] == s[i]){
                repeatNum++;
                continue;
            }
            out += repeatNum;
            out += s[i];
            repeatNum = '1';
        }
        return out;
    }
    string myRec(string s, int n){
        if(n <= 1) return s;
        return myRec(myRead(s),n-1);
    }
public:
    string countAndSay(int n) {
        return myRec("1",n);
    }
};