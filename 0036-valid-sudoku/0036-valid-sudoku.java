class Solution {
    public boolean check(int r, int c, char t, char board[][]) {
        for (int i = 0; i < board.length; i++) {
            if (board[i][c] == t && i != r) {
                return false;
            }
        }
        for (int i = 0; i < board.length; i++) {
            if (board[r][i] == t && i != c) {
                return false;
            }
        }
         int startRow = (r / 3) * 3;
        int startCol = (c / 3) * 3;
        for (int i = startRow; i < startRow + 3; i++) {
            for (int j = startCol; j < startCol + 3; j++) {
                if (board[i][j] == t && (i != r || j != c)) {
                    return false;
                }
            }
        }


        return true;
    }

    public boolean isValidSudoku(char[][] board) {
        int count = 0, n = 0;
        for (int i = 0; i < board.length; i++) {
            for (int j = 0; j < board[i].length; j++) {
                if (check(i, j, board[i][j], board) && board[i][j]!='.') {
                    count++;
                        System.out.println(board[i][j]);
                }
                if ((board[i][j] - '0') < 10 && (board[i][j] - '0') > 0) {
                    n++;
                }

            }
        }
        if (count == n)
            return true;
        return false;
    }
}