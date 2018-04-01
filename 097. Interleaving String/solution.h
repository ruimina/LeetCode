class Solution {
public:
    bool isInterleave(string s1, string s2, string s3) {
        int l1 = s1.length(), l2 = s2.length(), l3 = s3.length();
        if(l3 != l1+l2) return false;
        if(l1 == 0) return s2==s3;
        if(l2 == 0) return s1==s3;
        vector<vector<bool>> flag(l1+1, vector<bool>(l2+1, false));
        flag[0][0] = true;
        for(int i = 0; i < l1+1; i++) {
            for(int j = 0; j < l2+1; j++) {
                if(i > 0 && flag[i-1][j] && s1[i-1] == s3[i+j-1] ||
                   j > 0 && flag[i][j-1] && s2[j-1] == s3[i+j-1])
                    flag[i][j] = true;
            }
        }
        return flag[l1][l2];
    }
};