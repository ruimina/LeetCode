class Solution {
public:
    int numDistinct(string s, string t) {
        int ret = 0;
        if(s.length() < t.length()) return 0;
        if(t == "") return 1;
        vector<vector<int>> dp(s.length()+1, vector<int>(t.length()+1, 0));
        for(int i = 0; i < s.length()+1; i++) {
            dp[i][0] = 1;
        }
        for(int j = 0; j < t.length(); j++) {
            for(int i = 0; i < s.length(); i++) {
                if(s[i] == t[j]) dp[i+1][j+1] = dp[i][j] + dp[i][j+1];
                else dp[i+1][j+1] = dp[i][j+1];
            }
        }
        return dp[s.length()][t.length()];
    }
};