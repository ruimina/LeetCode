class Solution {
public:
    int minDistance(string word1, string word2) {
        int m = word1.length(), n = word2.length();
        vector<vector<int>> mymat(m+1, vector<int>(n+1));
        for(int i=0;i<m+1;i++){
            mymat[i][0] = i;
        }
        for(int i=1;i<n+1;i++){
            mymat[0][i] = i;
        }
        for(int i=1;i<m+1;i++){
            for(int j=1;j<n+1;j++){
                int flag = 1;
                if(word1[i-1] == word2[j-1]) flag = 0;
                mymat[i][j] = min(min(mymat[i-1][j], mymat[i][j-1])+1, mymat[i-1][j-1]+flag);
            }
        }
        return mymat[m][n];
    }
};