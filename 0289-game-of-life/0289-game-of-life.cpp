class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        int n = board.size(), m = board[0].size();
        for (int i = 0; i < board.size(); i++) {
            for (int j = 0; j < board[i].size(); j++) {
                int val = board[i][j],count=0;
                for (int k = -1; k <= 1; k++) {
                    for (int l = -1; l <= 1; l++) {
                        if (k == 0 && l == 0)
                            continue;
                        else {
                            int r = i + k;
                            int c = j + l;
                            if (r >= 0 && r < n && c >= 0 && c < m &&
                                abs(board[r][c])==1) {
                                count++;
                            }
                        }
                    }
                }
                if (val == 1) {
                    if (count < 2 || count > 3) {
                        board[i][j] = -1;
                    }
                } else {
                    if(count==3){
                        board[i][j]=2;
                    }
                }
            }
        }
          for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (board[i][j] > 0) board[i][j] = 1;
                else board[i][j] = 0;
            }
        }
    }
};