#include <iostream>
using namespace std;

bool binarySearch(int arr[], int start, int end, int key) {
    // Base case: element not found
    if (start > end)
        return false;

    int mid = start + (end - start) / 2;

    if (arr[mid] == key)
        return true;

    if (key < arr[mid])
        return binarySearch(arr, start, mid - 1, key);
    else
        return binarySearch(arr, mid + 1, end, key);
}

int main() {
    int arr[] = {2, 4, 6, 8, 10, 12, 14};
    int n = 7;
    int key = 10;

    if (binarySearch(arr, 0, n - 1, key))
        cout << "Element found\n";
    else
        cout << "Element not found\n";

    return 0;
}
