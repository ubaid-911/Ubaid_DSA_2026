#include <iostream>
using namespace std;

bool isSorted(int arr[], int n) {
    // Base Case: if 0 or 1 element, it's sorted
    if (n == 0 || n == 1)
        return true;

    // Check first pair
    if (arr[0] > arr[1])
        return false;

    // Recursive Call
    return isSorted(arr + 1, n - 1);
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;

    if(isSorted(arr, n))
        cout << "Array is sorted\n";
    else
        cout << "Array is not sorted\n";

    return 0;
}
