class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size();
        if(rows == 0) return false;
        int cols = matrix[0].size();
        if(cols == 0) return false;
        int top = 0, down = rows-1, left = 0, right = cols-1;
        while(top<down){
            int middle = (top+down)/2 + 1;
            if(matrix[middle][0] == target) return true;
            if(matrix[middle][0] < target) top = middle;
            else down = middle - 1;
        }
        while(left<right){
            int middle = (left+right)/2 + 1;
            if(matrix[top][middle] == target) return true;
            if(matrix[top][middle] < target) left = middle;
            else right = middle - 1;
        }
        return matrix[top][left] == target;
    }
};