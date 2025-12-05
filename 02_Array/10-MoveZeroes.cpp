#include <iostream>
using namespace std;

void moveZeroes(int arr[], int n) {
    int j = 0;
    for(int i=0; i<n; i++)
        if(arr[i] != 0)
            arr[j++] = arr[i];

    while(j < n)
        arr[j++] = 0;
}

int main() {
    int arr[5] = {0, 1, 0, 3, 12};
    moveZeroes(arr, 5);

    for(int i=0; i<5; i++)
        cout << arr[i] << " ";

    return 0;
}
/*


arr = {0, 1, 0, 3, 12}
n = 5

Iteration 1: i = 0
             arr[0] = 0

             It's zero → nothing happens

             j stays 0

Iteration 2: i = 1
             arr[1] = 1

             It's non-zero → arr[0] = 1, j++

             arr becomes: {1, 1, 0, 3, 12}

             j = 1

 Iteration 3: i = 2
             arr[2] = 0 → skip

             j = 1

Iteration 4: i = 3
             arr[3] = 3

             It's non-zero → arr[1] = 3, j++

             arr becomes: {1, 3, 0, 3, 12}

             j = 2


*/