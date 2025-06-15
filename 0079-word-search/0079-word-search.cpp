class Solution {
public:
    int n, m;
    vector<int> rw = {0, -1, 0, 1};
    vector<int> cw = {-1, 0, 1, 0};

    bool dfs(int row, int col, int ind, vector<vector<char>>& board, string& word) {
        if (ind == word.size()) return true;
        if (row < 0 || col < 0 || row >= n || col >= m || board[row][col] != word[ind])
            return false;
        
        char temp = board[row][col];
        board[row][col] = '#'; // mark visited

        for (int i = 0; i < 4; ++i) {
            int r = row + rw[i];
            int c = col + cw[i];
            if (dfs(r, c, ind + 1, board, word)) {
                return true;
            }
        }

        board[row][col] = temp; // unmark
        return false;
    }

    bool exist(vector<vector<char>>& board, string word) {
        n = board.size();
        m = board[0].size();

        // Frequency check to prune impossible words
        unordered_map<char, int> boardFreq, wordFreq;
        for (int i = 0; i < n; ++i)
            for (int j = 0; j < m; ++j)
                boardFreq[board[i][j]]++;

        for (char ch : word) wordFreq[ch]++;
        for (auto& [ch, cnt] : wordFreq) {
            if (boardFreq[ch] < cnt)
                return false; 
        }

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                if (board[i][j] == word[0] && dfs(i, j, 0, board, word))
                    return true;
            }
        }
        return false;
    }
};
