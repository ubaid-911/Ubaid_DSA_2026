#include <iostream> //---(binarySearch2D)
#include <vector>
using namespace std;

bool binarySearch2D(vector<vector<int>> &matrix, int target) {
    int rows = matrix.size();
    int cols = matrix[0].size();
    int start = 0, end = rows * cols - 1;

    while (start <= end) {
        int mid = start + (end - start) / 2;

        // directly store the element
        int element = matrix[mid / cols][mid % cols];

        if (element == target) return true;
        else if (element < target) start = mid + 1;
        else end = mid - 1;
    }
    return false;
}

int main() {
    vector<vector<int>> matrix = {
        {1, 3, 5, 7},
        {10, 11, 16, 20},
        {23, 30, 34, 60}
    };
    int target = 16;

    if (binarySearch2D(matrix, target))
        cout << "Found" << endl;
    else
        cout << "Not Found" << endl;

    return 0;
}
/*

Step 1: Initial setup
start = 0
end   = rows * cols - 1 = 3*4 - 1 = 11
So indexes go from 0 → 11 (like a flattened 1D array).

Step 2: First iteration
mid = start + (end - start)/2
    = 0 + (11 - 0)/2
    = 5

element = matrix[mid / cols][mid % cols]
        = matrix[5 / 4][5 % 4]
        = matrix[1][1]
        = 11
Compare with target:

11 < 16 → move right
start = mid + 1 = 6
end = 11
Step 3: Second iteration
mid = 6 + (11 - 6)/2
    = 8

element = matrix[8 / 4][8 % 4]
        = matrix[2][0]
        = 23
Compare:

23 > 16 → move left
end = mid - 1 = 7
Step 4: Third iteration
start = 6, end = 7
mid = 6 + (7 - 6)/2
    = 6

element = matrix[6 / 4][6 % 4]
        = matrix[1][2]
        = 16
Compare:

16 == 16 → Found
Output
Found

*/