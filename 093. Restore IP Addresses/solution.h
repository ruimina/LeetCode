class Solution {
private:
    bool isValid(string s) {
        if(s.length() == 1) return true;
        if(s.length() == 2) {
            if(s[0] != '0') return true;
        }
        if(s.length() == 3) {
            if(s[0] == '1') return true;
            if(s[0] == '2') {
                if(s[1] < '5' || s[1] == '5' && s[2] <='5') return true;
            }
        }
        return false;
    }
    void myRec(vector<string>& ret, string now, string left, int n) {
        //ret:��,now:��ǰ�ѷֶ�IP,left:��δ�ֶε�IP,n:�ѷֶ���
        if(n >= 3) {
            if(isValid(left)) {
                now += left;
                ret.push_back(now);
            }
            return;
        }
        for(int i = 0; i < left.length() && i < 3; i++) {
            string sub_left = left.substr(0, i+1);
            if(isValid(sub_left)) {
                myRec(ret, now + sub_left + ".", left.substr(i+1), n+1);
            }
        }
        return;
    }
public:
    vector<string> restoreIpAddresses(string s) {
        vector<string> ret;
        string now = "";
        myRec(ret, now, s, 0);
        return ret;
    }
};