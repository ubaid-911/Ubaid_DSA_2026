#include <iostream>
using namespace std;

int main() {
    int arr[5] = {5, 3, 1, 4, 2};
    int n = 5;

    for (int i = 1; i < n; i++) {
        int temp = arr[i];       // store current element
        int j = i - 1;

        while (j >= 0 && arr[j] > temp) {
            arr[j + 1] = arr[j]; // shift element to right
            j = j - 1;
        }
        arr[j+1] = temp;

    }

    // print sorted array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
/*

arr = {5, 3, 1, 4, 2}
n = 5

 Iteration 1: i = 1
            temp = arr[1] = 3

            j = 0

            Compare:
            arr[0] = 5 > 3 → shift 5 to right → arr[1] = 5
            → j = -1

            Insert:
            arr[0] = temp = 3

           Array becomes: {3, 5, 1, 4, 2}

 Iteration 2: i = 2
            temp = arr[2] = 1

            j = 1

            Compare:
            arr[1] = 5 > 1 → shift → arr[2] = 5
            arr[0] = 3 > 1 → shift → arr[1] = 3
            → j = -1

            Insert:
            arr[0] = temp = 1

            Array becomes: {1, 3, 5, 4, 2}

Iteration 3: i = 3
            temp = arr[3] = 4

            j = 2

            Compare:
            arr[2] = 5 > 4 → shift → arr[3] = 5
            arr[1] = 3 < 4 → stop

            Insert:
            arr[2] = temp = 4

            Array becomes: {1, 3, 4, 5, 2}

Iteration 4: i = 4
            temp = arr[4] = 2

            j = 3

            Compare:
            arr[3] = 5 > 2 → shift → arr[4] = 5
            arr[2] = 4 > 2 → shift → arr[3] = 4
            arr[1] = 3 > 2 → shift → arr[2] = 3
            arr[0] = 1 < 2 → stop

            Insert:
            arr[1] = temp = 2

             Array becomes: {1, 2, 3, 4, 5}


Final Output:
1 2 3 4 5



*/