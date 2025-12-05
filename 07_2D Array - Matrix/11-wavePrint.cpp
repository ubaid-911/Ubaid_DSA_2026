#include <iostream>
#include <vector>
using namespace std;

vector<int> wavePrint(vector<vector<int>> &arr, int rows, int cols) {
    vector<int> ans;

    for (int col = 0; col < cols; col++) {
        if (col & 1) { // odd column → bottom to top
            for (int row = rows - 1; row >= 0; row--) {
                ans.push_back(arr[row][col]);
            }
        } else { // even column → top to bottom
            for (int row = 0; row < rows; row++) {
                ans.push_back(arr[row][col]);
            }
        }
    }
    return ans;
}

int main() {
    vector<vector<int>> arr = {
        {1,  2,  3,  4},
        {5,  6,  7,  8},
        {9, 10, 11, 12}
    };

    int rows = 3, cols = 4;
    vector<int> result = wavePrint(arr, rows, cols);

    // Printing answer
    cout << "Wave print: ";
    for (int x : result) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
/*
1   2   3   4
5   6   7   8
9  10  11  12

col = 0 (even) → top to bottom
Push: 1, 5, 9
ans = [1, 5, 9]

col = 1 (odd) → bottom to top
Push: 10, 6, 2
ans = [1, 5, 9, 10, 6, 2]

col = 2 (even) → top to bottom
Push: 3, 7, 11
ans = [1, 5, 9, 10, 6, 2, 3, 7, 11]

col = 3 (odd) → bottom to top
Push: 12, 8, 4
ans = [1, 5, 9, 10, 6, 2, 3, 7, 11, 12, 8, 4]

Final Output
Wave print: 1 5 9 10 6 2 3 7 11 12 8 4

*/