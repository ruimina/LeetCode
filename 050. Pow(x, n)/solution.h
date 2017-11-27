class Solution {
public:
    double myPow(double x, int n) {
        if(n == 0) return 1;
        if(n == INT_MIN) return 1/x*myPow(1/x,INT_MAX);
        if(n < 0){
            x = 1/x;
            n = -n;
        }
        return (n%2)?x*myPow(x*x,n/2):myPow(x*x,n/2);
    }
};