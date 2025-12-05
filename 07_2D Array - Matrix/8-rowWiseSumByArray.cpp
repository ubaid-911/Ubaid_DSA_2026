#include <iostream>
using namespace std;

int main() {

    int rows = 3, cols = 3;
    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    for (int i = 0; i < rows; i++) {
        int sum = 0;  
        for (int j = 0; j < cols; j++) {
            sum += arr[i][j];
        }
        cout << "Sum of row " << i << " = " << sum << endl;
    }

    return 0;
}
/*
i = 0 → First row
sum = 0

j = 0 → sum = 0 + arr[0][0] = 0 + 1 = 1

j = 1 → sum = 1 + arr[0][1] = 1 + 2 = 3

j = 2 → sum = 3 + arr[0][2] = 3 + 3 = 6

Print → "Sum of row 0 = 6"

i = 1 → Second row
sum = 0

j = 0 → sum = 0 + arr[1][0] = 0 + 4 = 4

j = 1 → sum = 4 + arr[1][1] = 4 + 5 = 9

j = 2 → sum = 9 + arr[1][2] = 9 + 6 = 15

Print → "Sum of row 1 = 15"

i = 2 → Third row
sum = 0

j = 0 → sum = 0 + arr[2][0] = 0 + 7 = 7

j = 1 → sum = 7 + arr[2][1] = 7 + 8 = 15

j = 2 → sum = 15 + arr[2][2] = 15 + 9 = 24

Print → "Sum of row 2 = 24"

*/