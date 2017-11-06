Write a program to solve a Sudoku puzzle by filling the empty cells.
Empty cells are indicated by the character '.'.
You may assume that there will be only one unique solution. 
给定数独局面

关键步骤为：
                    for(char c='1';c<='9';c++){
                        if(isValid(board,i,j,c)){
                            board[i][j] = c;
                            if(solveRec(board,i,j)) return true;
                            board[i][j] = '.';
                        }
                    }
                    return false;
