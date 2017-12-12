class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int flag = 0;
        int rows = n, columns = n, count = 0;
        if(rows == 0){
            return vector<vector<int>>();
        }
        vector<vector<int>> out(n,vector<int>(n,0));
        vector<vector<bool>> flag_visit(rows, vector<bool>(columns, false));
        int m=0,nn=0;
        for(int i=0; i<rows*columns; i++){
            out[nn][m] = ++count;
            flag_visit[nn][m] = true;
            switch(flag){
                case 0:m++;break;
                case 1:nn++;break;
                case 2:m--;break;
                case 3:nn--;break;
            }
            if(m<0 || m>=columns || nn < 0 || nn>=rows || flag_visit[nn][m]){
                switch(flag){
                    case 0:m--;nn++;break;
                    case 1:nn--;m--;break;
                    case 2:m++;nn--;break;
                    case 3:nn++;m++;break;
                }
                flag ++;
                if(flag >=4) flag = 0;
            }
        }
        return out;
    }
};