class Solution {
public:
    string multiply(string num1, string num2) {
        int len1=num1.size(), len2=num2.size();
        vector<vector<int>> shushi(len2, vector<int>(len1+1,0));
        for(int i=len2-1;i>=0;i--){
            int right = num2[i] - '0';
            int jinwei = 0;
            for(int j=len1-1;j>=0;j--){
                int left = num1[j] - '0';
                int mul = left*right + jinwei;
                shushi[len2-1-i][j+1] = mul%10;
                jinwei = mul/10;
            }
            shushi[len2-1-i][0] = jinwei;
        }
        stack<int> outStack;
        int jinwei = 0;
        for(int i=0;i<len1+len2;i++){
            int sum = 0;
            for(int j=i-len1>0?i-len1:0;j<len2&&i>=j;j++){
                sum += shushi[j][len1-i+j];
            }
            sum += jinwei;
            outStack.push(sum%10);
            jinwei = sum/10;
        }
        outStack.push(jinwei);
        while(!outStack.empty() && outStack.top() == 0) outStack.pop();
        string out = "";
        while(!outStack.empty()){
            char temp = '0'+outStack.top();
            out += temp;
            outStack.pop();
        }
        if(out == "") return "0";
        return out;
    }
};