class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<vector<vector<int>>> vec(3,vector<vector<int>>(9,vector<int>(9,0)));
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                char c = board[i][j];
                if(c == '.') continue;
                int temp = 0, val = c-'1';
                temp += vec[0][i][val] ++;
                temp += vec[1][j][val] ++;
                temp += vec[2][i/3+(j/3)*3][val] ++;
                if(temp>0) return false;
            }
        }
        return true;
    }
};