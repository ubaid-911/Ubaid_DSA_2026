#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void rotate(vector<vector<int>>& v) {
    int n = v.size();

    // Step 1: Transpose
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            swap(v[i][j], v[j][i]);
        }
    }

    // Step 2: Reverse each row
    for (int i = 0; i < n; i++) {
        reverse(v[i].begin(), v[i].end());
    }
}

int main() {
    vector<vector<int>> v = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    rotate(v);

    // Print rotated matrix
    for (auto row : v) {
        for (auto val : row) {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}
/*

Step 1: Transpose (swap v[i][j] with v[j][i] for j ≥ i)
i = 0
j = 0: swap(v[0][0], v[0][0]) → no change

1 2 3
4 5 6
7 8 9
j = 1: swap(v[0][1], v[1][0]) → swap(2,4)

1 4 3
2 5 6
7 8 9
j = 2: swap(v[0][2], v[2][0]) → swap(3,7)

1 4 7
2 5 6
3 8 9
i = 1
j = 1: swap(v[1][1], v[1][1]) → no change

1 4 7
2 5 6
3 8 9
j = 2: swap(v[1][2], v[2][1]) → swap(6,8)

1 4 7
2 5 8
3 6 9
i = 2
j = 2: swap(v[2][2], v[2][2]) → no change

1 4 7
2 5 8
3 6 9
After transpose:

1 4 7
2 5 8
3 6 9
Step 2: Reverse each row
Row 0: [1, 4, 7] → reverse → [7, 4, 1]

7 4 1
2 5 8
3 6 9
Row 1: [2, 5, 8] → reverse → [8, 5, 2]

7 4 1
8 5 2
3 6 9
Row 2: [3, 6, 9] → reverse → [9, 6, 3]

7 4 1
8 5 2
9 6 3
Final matrix printed by main
7 4 1
8 5 2
9 6 3 

*/