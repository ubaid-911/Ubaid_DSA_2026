#include <iostream> //---(staircase search)
#include <vector>
using namespace std;

bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int rows = matrix.size();
    int cols = matrix[0].size();

    int rowIndex = 0;         // start from first row
    int colIndex = cols - 1;  // start from last column

    while (rowIndex < rows && colIndex >= 0) {
        int element = matrix[rowIndex][colIndex];
12
        if (element == target) {
            return true;  // found
        }
        else if (element < target) {
            rowIndex++;   // move down
        }
        else {
            colIndex--;   // move left
        }
    }
    return false; // not found
}

int main() {
    vector<vector<int>> mat = {
        {1, 4, 7, 11},
        {12, 15, 19, 20},
        {21, 23, 26, 30}
    };

    int target = 19;

    cout << (searchMatrix(mat, target) ? "Found" : "Not Found") << endl;

    return 0;
}
/*
Start at rowIndex=0, colIndex=3 → element=11.
11 < 19 → move down → rowIndex=1.

Now rowIndex=1, colIndex=3 → element=20.
20 > 19 → move left → colIndex=2.

Now rowIndex=1, colIndex=2 → element=19.
✅ Found.

*/