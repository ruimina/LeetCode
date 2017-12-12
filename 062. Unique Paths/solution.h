class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<vector<int>> pathNum(m, vector<int>(n,1));
        for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
                pathNum[i][j] = pathNum[i-1][j] + pathNum[i][j-1];
            }
        }
        return pathNum[m-1][n-1];
    }
};