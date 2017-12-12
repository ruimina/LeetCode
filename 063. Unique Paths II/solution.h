class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m = obstacleGrid.size();
        if(m == 0) return 0;
        int n = obstacleGrid[0].size();
        vector<vector<int>> pathNum(m, vector<int>(n,1));
        bool flag = false;
        for(int i=0;i<m;i++){
            if(flag) pathNum[i][0] = 0;
            if(obstacleGrid[m-1-i][n-1] == 1){
                pathNum[i][0] = 0;
                flag = true;
            }
        }
        flag = false;
        for(int j=0;j<n;j++){
            if(flag) pathNum[0][j] = 0;
            if(obstacleGrid[m-1][n-1-j] == 1){
                pathNum[0][j] = 0;
                flag = true;
            }
        }
        for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
                if(obstacleGrid[m-1-i][n-1-j] == 1) pathNum[i][j] = 0;
                else pathNum[i][j] = pathNum[i-1][j] + pathNum[i][j-1];
            }
        }
        return pathNum[m-1][n-1];
    }
};