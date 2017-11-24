class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int len = matrix.size();
        for(int i = 0; i < len/2; i++){
            for(int j = i; j < len-i-1; j++){
                int temp1 = matrix[j][len-1-i]; //right
                matrix[j][len-1-i] = matrix[i][j]; //top -> right
                int temp2 = matrix[len-1-i][len-1-j]; //down 
                matrix[len-1-i][len-1-j] = temp1; // right -> down
                matrix[i][j] = matrix[len-1-j][i]; // left -> top
                matrix[len-1-j][i] = temp2; //down -> left
            }
        }
        return;
    }
};