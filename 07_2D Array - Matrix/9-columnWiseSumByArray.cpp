#include <iostream>
using namespace std;

int main() {
    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int rows = 3, cols = 3;

    for (int j = 0; j < cols; j++) {
        int sum = 0;   // sum of current column
        for (int i = 0; i < rows; i++) {
            sum += arr[i][j];
        }
        cout << "Sum of column " << j << " = " << sum << endl;
    }

    return 0;
}
/*

j = 0 → First column
sum = 0

i = 0 → sum = 0 + arr[0][0] = 0 + 1 = 1

i = 1 → sum = 1 + arr[1][0] = 1 + 4 = 5

i = 2 → sum = 5 + arr[2][0] = 5 + 7 = 12

Print → "Sum of column 0 = 12"

j = 1 → Second column
sum = 0

i = 0 → sum = 0 + arr[0][1] = 0 + 2 = 2

i = 1 → sum = 2 + arr[1][1] = 2 + 5 = 7

i = 2 → sum = 7 + arr[2][1] = 7 + 8 = 15

Print → "Sum of column 1 = 15"

j = 2 → Third column
sum = 0

i = 0 → sum = 0 + arr[0][2] = 0 + 3 = 3

i = 1 → sum = 3 + arr[1][2] = 3 + 6 = 9

i = 2 → sum = 9 + arr[2][2] = 9 + 9 = 18

Print → "Sum of column 2 = 18"

*/