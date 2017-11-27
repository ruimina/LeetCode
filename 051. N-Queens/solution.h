class Solution {
    bool isValid(vector<int> queensPos, int row, int col){
        for(int i=0;i<row;i++){
            if(col == queensPos[i]) return false;
            if(abs(col-queensPos[i]) == row-i) return false;
        }
        return true;
    }
    void myRec(vector<int> &queensPos, int row, int n, vector<vector<string>> &out){
        for(int i=0;i<n;i++){
            if(isValid(queensPos, row, i)){
                if(row == n-1){
                    vector<string> temp(n, string(n,'.'));
                    for(int j=0;j<n-1;j++){
                        temp[j][queensPos[j]] = 'Q';
                    }
                    temp[n-1][i] = 'Q';
                    out.push_back(temp);
                    return;
                }
                queensPos[row] = i;
                myRec(queensPos, row+1, n, out);
            }
        }
        return;
    }
public:
    vector<vector<string>> solveNQueens(int n) {
        vector<int> queensPos(n,0);
        vector<vector<string>> out;
        myRec(queensPos, 0, n, out);
        return out;
    }
};