Determine if a Sudoku is valid, according to: Sudoku Puzzles - The Rules.
The Sudoku board could be partially filled, where empty cells are filled with the character '.'.
给定数独的9*9board，判断是否valid。

用3*9个长度为9的vector去存1-9是否出现过，对应9个横，
9个列，9个3*3的框，是否有重复数字出现。