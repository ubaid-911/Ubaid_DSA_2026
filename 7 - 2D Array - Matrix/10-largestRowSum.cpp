#include <iostream>
#include <climits>
using namespace std;

// Function to find row with largest sum
int largestRowSum(int arr[3][3], int rows, int cols) {
    int maxi = INT_MIN;
    int rowIndex = -1;

    for (int i = 0; i < rows; i++) {
        int sum = 0;
        for (int j = 0; j < cols; j++) {
            sum += arr[i][j];
        }

        if (sum > maxi) {
            maxi = sum;
            rowIndex = i;
        }
    }

    cout << "Row " << rowIndex << " has the largest sum = " << maxi << endl;
    return rowIndex; // returning row index
}

int main() {
    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int rows = 3, cols = 3;

    // Call the function
    largestRowSum(arr, rows, cols);

    return 0;
}
/*
Row 0:
sum = 1 + 2 + 3 = 6

Compare: if (6 > INT_MIN) → true

Update: maxi = 6, rowIndex = 0
````````````````````````````````````````````
Row 1:
sum = 4 + 5 + 6 = 15

Compare: if (15 > 6) → true

Update: maxi = 15, rowIndex = 1
````````````````````````````````````````````````
Row 2:
sum = 7 + 8 + 9 = 24

Compare: if (24 > 15) → true

Update: maxi = 24, rowIndex = 2
```````````````````````````````````````````````````
Final values
maxi = 24
rowIndex = 2

*/