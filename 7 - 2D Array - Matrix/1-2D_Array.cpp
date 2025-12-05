#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the Number : ";
    cin >> n;

    int **arr = new int *[n];

    for(int i=0; i<n; i++) {
        arr[i] = new int[n];
    }

    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            cin >> arr[i][j];
        }
    }

    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            cout << arr[i][j] << " ";
        }cout << endl;
    }

return 0;
}
/*

Iteration 1: i = 1

temp = arr[1] = 4

j = 0

Compare:

arr[0] = 7 > 4 → shift → arr[1] = 7

→ j = -1

Insert:

arr[0] = temp = 4

Array becomes: {4, 7, 5, 2, 9}

Iteration 2: i = 2

temp = arr[2] = 5

j = 1

Compare:

arr[1] = 7 > 5 → shift → arr[2] = 7

arr[0] = 4 < 5 → stop

Insert:

arr[1] = temp = 5

Array becomes: {4, 5, 7, 2, 9}

Iteration 3: i = 3

temp = arr[3] = 2

j = 2

Compare:

arr[2] = 7 > 2 → shift → arr[3] = 7

arr[1] = 5 > 2 → shift → arr[2] = 5

arr[0] = 4 > 2 → shift → arr[1] = 4

→ j = -1

Insert:

arr[0] = temp = 2

Array becomes: {2, 4, 5, 7, 9}

Iteration 4: i = 4

temp = arr[4] = 9

j = 3

Compare:

arr[3] = 7 < 9 → stop

Insert:

arr[4] = temp = 9

Array becomes: {2, 4, 5, 7, 9}

*/