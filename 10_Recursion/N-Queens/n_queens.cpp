#include <iostream>
#include <vector>
using namespace std;

void solve(int col, int n, vector<string> &board, 
           vector<int> &leftRow, vector<int> &upperDiagonal, vector<int> &lowerDiagonal) {
    
    // Base case — all queens placed
    if (col == n) {
        for (auto row : board)
            cout << row << endl;
        cout << endl;
        return;
    }

    // Try placing queen in each row of current column
    for (int row = 0; row < n; row++) {
        if (leftRow[row] == 0 && lowerDiagonal[row + col] == 0 && upperDiagonal[n - 1 + col - row] == 0) {
            
            // Place queen
            board[row][col] = 'Q';
            leftRow[row] = 1;
            lowerDiagonal[row + col] = 1;
            upperDiagonal[n - 1 + col - row] = 1;

            // Recur for next column
            solve(col + 1, n, board, leftRow, upperDiagonal, lowerDiagonal);

            // Backtrack
            board[row][col] = '.';
            leftRow[row] = 0;
            lowerDiagonal[row + col] = 0;
            upperDiagonal[n - 1 + col - row] = 0;
        }
    }
}

int main() {
    int n = 4;
    vector<string> board(n, string(n, '.'));
    vector<int> leftRow(n, 0);
    vector<int> upperDiagonal(2 * n - 1, 0);
    vector<int> lowerDiagonal(2 * n - 1, 0);

    cout << "All possible solutions for 4 Queens:\n\n";
    solve(0, n, board, leftRow, upperDiagonal, lowerDiagonal);

    return 0;
}
