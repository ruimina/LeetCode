class Solution {
public:
    string intToRoman(int num) {
        string roman[7] = {"I","V","X","L","C","D","M"};
        string out = "";
        int i = 0;
        while(num > 0){
            switch(num%10){
                case 0:break;
                case 1:out = roman[i] + out;break;
                case 2:out = roman[i] + roman[i] + out;break;
                case 3:out = roman[i] + roman[i] + roman[i] + out;break;
                case 4:out = roman[i] + roman[i+1] + out;break;
                case 5:out = roman[i+1] + out;break;
                case 6:out = roman[i+1] + roman[i] + out;break;
                case 7:out = roman[i+1] + roman[i] + roman[i] + out;break;
                case 8:out = roman[i+1] + roman[i] + roman[i] + roman[i] + out;break;
                case 9:out = roman[i] + roman[i+2] + out;break;
            }
            num /= 10;
            i += 2;
        }
        return out;
    }
};