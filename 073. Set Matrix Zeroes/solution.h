class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        if(matrix.size() == 0) return;
        if(matrix[0].size() == 0) return;
        bool firstColFlag = false;
        for(int i=0;i<matrix.size();i++){
            if(matrix[i][0] == 0) firstColFlag = true;
            for(int j=1;j<matrix[0].size();j++){
                if(matrix[i][j] == 0){
                    matrix[i][0] = 0;
                    matrix[0][j] = 0;
                }
            }
        }
        for(int i=1;i<matrix.size();i++){
            for(int j=1;j<matrix[0].size();j++){
                if(matrix[i][0] == 0 || matrix[0][j] == 0)
                    matrix[i][j] = 0;
            }
            if(firstColFlag) matrix[i][0] = 0;
        }
        for(int j=1;j<matrix[0].size();j++){
            if(matrix[0][0] == 0) matrix[0][j] = 0;
        }
        if(firstColFlag) matrix[0][0] = 0;
        return;
    }
};