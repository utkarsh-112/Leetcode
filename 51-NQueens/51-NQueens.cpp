// Last updated: 01/02/2026, 21:18:09
class Solution {
public:
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> result;
        vector<string> board(n, string(n, '.')); // empty board
        
        vector<int> cols(n, 0);          // columns
        vector<int> diag1(2 * n - 1, 0); // major diagonal "/"
        vector<int> diag2(2 * n - 1, 0); // minor diagonal "\"
        
        solve(0, n, board, result, cols, diag1, diag2);
        return result;
    }

    void solve(int row, int n, vector<string>& board, vector<vector<string>>& result,
               vector<int>& cols, vector<int>& diag1, vector<int>& diag2) {
        if (row == n) {
            result.push_back(board);
            return;
        }

        for (int col = 0; col < n; col++) {
            if (cols[col] || diag1[row + col] || diag2[row - col + n - 1])
                continue; // not safe
            
            // place queen
            board[row][col] = 'Q';
            cols[col] = diag1[row + col] = diag2[row - col + n - 1] = 1;

            solve(row + 1, n, board, result, cols, diag1, diag2);

            // backtrack
            board[row][col] = '.';
            cols[col] = diag1[row + col] = diag2[row - col + n - 1] = 0;
        }
    }
};
