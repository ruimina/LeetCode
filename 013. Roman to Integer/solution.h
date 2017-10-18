class Solution {
public:
    int romanToInt(string s) {
        map<char, int> roman;
        roman['I'] = 1;
        roman['V'] = 5;
        roman['X'] = 10;
        roman['L'] = 50;
        roman['C'] = 100;
        roman['D'] = 500;
        roman['M'] = 1000;
        int i = 0, len = s.length(), sum = 0;
        while(i<len){
            int n = 1;
            char temp = s[i];
            while(++i<len && s[i] == temp) n++;
            if(i>=len || roman[s[i]] < roman[temp]) sum += n*roman[temp];
            else if(roman[s[i]] > roman[temp]) sum -= n*roman[temp];
        }
        return sum;
    }
};