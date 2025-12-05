#include <iostream>
#include <vector>
using namespace std;

int main() {
    int rows = 3, cols = 4;
    vector<vector<int>> v = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    // Printing 2D vector
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

/*
Outer loop: for (i = 0; i < 3; i++)
Inner loop: for (j = 0; j < 4; j++)

i = 0
j = 0 → print v[0][0] = 1 → 1

j = 1 → print 2 → 1 2

j = 2 → print 3 → 1 2 3

j = 3 → print 4 → 1 2 3 4

newline

i = 1
j = 0 → print 5 → 5

j = 1 → print 6 → 5 6

j = 2 → print 7 → 5 6 7

j = 3 → print 8 → 5 6 7 8

newline

i = 2
j = 0 → print 9 → 9

j = 1 → print 10 → 9 10

j = 2 → print 11 → 9 10 11

j = 3 → print 12 → 9 10 11 12

return 0
*/