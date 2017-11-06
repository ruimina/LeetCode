class Solution {
public:
    int divide(int dividend, int divisor) {
        if(divisor == 0) return INT_MAX;
        if(dividend == INT_MIN && divisor == -1) return INT_MAX;
        bool flag = true;
        if(dividend < 0){
            dividend = -dividend;
            flag = !flag;
        }
        if(divisor < 0){
            divisor = -divisor;
            flag = !flag;
        }
        unsigned int num = 1;
        unsigned int sum = divisor;
        while(sum<dividend){
            sum = sum << 1;
            num = num << 1;
        }
        if(sum == dividend) return flag?num:-num;
        else{
            if(num == 1) return 0;
            else{
                sum = sum >> 1;
                num = num >> 1;
                dividend -= sum;
                int out = num + divide(dividend, divisor);
                return flag?out:-out;
            }
        }
    }
};