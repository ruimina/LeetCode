class Solution {
public:
    int reverse(int x) {
        bool flag = true;
        if(x == -2147483648) return 0;
        if(x<0){
            flag = false;
            x = -x;
        }
        int right = 0;
        while(x>=10){
            right = right*10 + x%10;
            x = x/10;
        }
        if(right > 214748364) return 0;
        int out = right*10 + x%10;
        return flag?out:-out;
    }
};