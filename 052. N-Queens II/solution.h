class Solution {
    bool isValid(vector<int> queensPos, int row, int col){
        for(int i=0;i<row;i++){
            if(col == queensPos[i]) return false;
            if(abs(col-queensPos[i]) == row-i) return false;
        }
        return true;
    }
    int myRec(vector<int> &queensPos, int row, int n){
        int sum = 0;
        for(int i=0;i<n;i++){
            if(isValid(queensPos, row, i)){
                if(row == n-1){
                    return 1;
                }
                queensPos[row] = i;
                sum += myRec(queensPos, row+1, n);
            }
        }
        return sum;
    }
public:
    int totalNQueens(int n) {
        vector<int> queensPos(n,0);
        return myRec(queensPos, 0, n);
    }
};