class Solution {
public:
    string addBinary(string a, string b) {
        if(b.length() > a.length()){
            string temp = a;
            a=b;
            b=temp;
        }
        int len_a = a.length(), len_b = b.length();
        string out;
        int flag = 0;
        for(int i=0;i<len_b;i++){
            int sum = flag + a[len_a-1-i] - '0' + b[len_b-1-i] - '0';
            if(sum == 3 || sum == 1){
                out.append("1");
                if(sum == 3) flag = 1;
                else flag = 0;
            }else{
                out.append("0");
                if(sum == 2) flag = 1;
                else flag = 0;
            }
        }
        int i=len_b;
        for(;i<len_a;i++){
            if(flag){
                if(a[len_a-1-i] == '1') out.append("0");
                else{
                    out.append("1");
                    flag = 0;
                }
            }
            else break;
        }
        if(flag) out.append("1");
        else{
            for(;i<len_a;i++){
                if(a[len_a-1-i] == '0') out.append("0");
                else out.append("1");
            }
        }
        reverse(out.begin(),out.end());
        return out;
    }
};