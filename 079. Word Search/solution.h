class Solution {
private:
    int next[4][2] = {{-1,0}, {0,1}, {1,0}, {0,-1}};
    bool myRec(vector<vector<char>>& board, vector<vector<bool>>& visited, string word, int row, int col){
        if(word.length() == 0) return true;
        for(int i=0; i<4; i++){
            int next_row = row + next[i][0], next_col = col + next[i][1];
            if(next_row >= 0 && next_row < board.size() && next_col >= 0 && next_col < board[0].size()){
                if(!visited[next_row][next_col] && board[next_row][next_col] == word[0]){
                    visited[next_row][next_col] = true;
                    if(myRec(board, visited, word.substr(1), next_row, next_col)) return true;
                    visited[next_row][next_col] = false;
                }
            }
        }
        return false;
    }
public:
    bool exist(vector<vector<char>>& board, string word) {
        if(board.size() == 0 || board[0].size() == 0) return false;
        vector<vector<bool>> visited(board.size(), vector<bool>(board[0].size(), false));
        bool flag = false;
        for(int i = 0; i < board.size(); i++){
            for(int j = 0; j < board[0].size(); j++){
                if(word[0] == board[i][j]){
                    visited[i][j] = true;
                    if(myRec(board, visited, word.substr(1), i, j)) return true;
                    visited[i][j] = false;
                }
            }
        }
        return false;
    }
};