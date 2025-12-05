#include <iostream>
using namespace std;

int main() {
    int row = 3 , col = 3;
    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int target = 5;
    bool found = false;

    for   (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (arr[i][j] == target) {
                cout << "Found " << target << " at position (" << i << "," << j << ")" << endl;
                found = true;
            }
        }
    }

    if (!found) cout << "Not found" << endl;

    return 0;
}
/*

target = 5

found = false

Loops ka dry run
Outer loop: for (i = 0; i < 3; i++)
Inner loop: for (j = 0; j < 3; j++)

i = 0
j = 0 → arr[0][0] = 1 → not equal → continue

j = 1 → arr[0][1] = 2 → not equal

j = 2 → arr[0][2] = 3 → not equal

i = 1
j = 0 → arr[1][0] = 4 → not equal

j = 1 → arr[1][1] = 5 → equal to target

print → Found 5 at position (1,1)

set found = true

j = 2 → arr[1][2] = 6 → not equal

i = 2
j = 0 → arr[2][0] = 7 → not equal

j = 1 → arr[2][1] = 8 → not equal

j = 2 → arr[2][2] = 9 → not equal

*/