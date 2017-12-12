class Solution {
public:
    string getPermutation(int n, int k) {
        vector<int> factoral(n-1,1);
        for(int i=1;i<n-1;i++){
            factoral[i] = factoral[i-1] * (i+1);
        }
        vector<char> num(n);
        for(int i=0;i<n;i++){
            num[i] = i+'1';
        }
        string out = "";
        int remain = k-1, factoral_num = n-2;
        while(remain > 0){
            int index = remain / factoral[factoral_num];
            out.push_back(num[index]);
            num.erase(num.begin()+index);
            remain = remain % factoral[factoral_num--];
        }
        for(int i=0;i<num.size();i++){
            out += num[i];
        }
        return out;
    }
};