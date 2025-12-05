#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n) {
    // Base case: if only one element left, array is sorted
    if (n == 1)
        return;

    // One pass: move the largest element to the end
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1])
            swap(arr[i], arr[i + 1]);
    }

    // Recursive call for remaining elements
    bubbleSort(arr, n - 1);
}

int main() {
    int arr[] = {5, 1, 4, 2, 8};
    int n = 5;

    bubbleSort(arr, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
