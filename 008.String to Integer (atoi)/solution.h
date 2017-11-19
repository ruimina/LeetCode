class Solution {
public:
    int myAtoi(string str) {
        bool flag = true;
        int out = 0, num = 0, dec = -1;
        int i = 0;
        while(str[i] == ' ') i++;
        if(str[i] == '-'){
            flag = false;
            i++;
        }
        else if(str[i] == '+') i++;
        while(i<str.length() && (str[i] >= '0' && str[i] <= '9')){
            int temp = out;
            out = out*10 + str[i] - '0';
            if(temp != out/10) return flag?INT_MAX:INT_MIN;
            i ++;        
        }
        return flag?out:-out;
    }
};