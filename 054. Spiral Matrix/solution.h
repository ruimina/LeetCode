class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int flag = 0;
        int rows = matrix.size();
        if(rows == 0){
            return vector<int>();
        }
        int columns = matrix[0].size();
        if(rows*columns == 0){
            return vector<int>();
        }
        vector<int> out(rows*columns,0);
        vector<vector<bool>> flag_visit(rows, vector<bool>(columns, false));
        int m=0,n=0;
        for(int i=0; i<rows*columns; i++){
            out[i] = matrix[n][m];
            flag_visit[n][m] = true;
            switch(flag){
                case 0:m++;break;
                case 1:n++;break;
                case 2:m--;break;
                case 3:n--;break;
            }
            if(m<0 || m>=columns || n < 0 || n>=rows || flag_visit[n][m]){
                switch(flag){
                    case 0:m--;n++;break;
                    case 1:n--;m--;break;
                    case 2:m++;n--;break;
                    case 3:n++;m++;break;
                }
                flag ++;
                if(flag >=4) flag = 0;
            }
        }
        return out;
    }
};