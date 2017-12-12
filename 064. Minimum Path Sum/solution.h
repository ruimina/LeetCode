class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int m = grid.size();
        if(m==0) return 0;
        int n = grid[0].size();
        vector<vector<int>> pathSum(m, vector<int>(n,0));
        pathSum[0][0] = grid[m-1][n-1];
        for(int i=1;i<m;i++){
            pathSum[i][0] = pathSum[i-1][0] + grid[m-1-i][n-1];
        }
        for(int j=1;j<n;j++){
            pathSum[0][j] = pathSum[0][j-1] + grid[m-1][n-1-j];
        }
        for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
                pathSum[i][j] = min(pathSum[i-1][j], pathSum[i][j-1]) + grid[m-1-i][n-1-j];
            }
        }
        return pathSum[m-1][n-1];
    }
};