class Solution {
public:
    int longestValidParentheses(string s) {
        int len = s.length();
        vector<int> p(len+1,0);
        int max = 0;
        for(int i=len-1;i>=0;i--){
            if(s[i] == ')'){
                p[i] = 0;
                continue;
            }
            int left = 1,right = 0;
            for(int j=i+1;j<len;j++){
                if(s[j] == '(') left++;
                if(s[j] == ')') right++;
                if(left == right){
                    p[i] = p[j+1] + left*2;
                    break;
                }
            }
            if(p[i]>max) max = p[i];
        }
        return max;
    }
};

ref£º
class Solution {
public:
    int longestValidParentheses(string s) {
        int len = s.length();
        stack<int> st;
        for(int i=0;i<len;i++){
            if(s[i] == '(') st.push(i);
            else{
                if(!st.empty()&&s[st.top()] == '(') st.pop();
                else st.push(i);
            }
        }
        int maxlen = 0;
        int right = len;
        int index = len;
        while(!st.empty()){
            index = st.top();
            st.pop();
            maxlen = max(right-index-1,maxlen);
            right = index;
        }
        return max(index,maxlen);
    }
};