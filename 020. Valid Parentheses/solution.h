class Solution {
public:
    bool isValid(string s) {
        stack<char> mystack;
        int len = s.length();
        for(int i=0; i<len; i++){
            switch(s[i]){
                case '(':
                case '[':
                case '{':mystack.push(s[i]);break;
                case ')':
                    if(!mystack.empty() && mystack.top() == '(') mystack.pop();
                    else return false;
                    break;
                case ']':
                    if(!mystack.empty() && mystack.top() == '[') mystack.pop();
                    else return false;
                    break;
                case '}':
                    if(!mystack.empty() && mystack.top() == '{') mystack.pop();
                    else return false;
                    break;
                default:break;
            }
        }
        return mystack.empty();
    }
};