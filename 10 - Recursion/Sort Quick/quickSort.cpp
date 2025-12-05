#include <iostream>
using namespace std;

// Partition function
int partition(int arr[], int start, int end) {
    int pivot = arr[end];  // choose the last element as pivot
    int i = start - 1;     // pointer for smaller element

    for (int j = start; j < end; j++) {
        if (arr[j] < pivot) {  // if current element is smaller than pivot
            i++;
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[i + 1], arr[end]);  // place pivot in correct position
    return i + 1;                // return pivot index
}

// QuickSort function (recursive)
void quickSort(int arr[], int start, int end) {
    // Base case
    if (start >= end)
        return;

    // Step 1: Partition the array
    int pi = partition(arr, start, end);

    // Step 2: Recursively sort elements before and after partition
    quickSort(arr, start, pi - 1);
    quickSort(arr, pi + 1, end);
}

int main() {
    int arr[] = {5, 1, 4, 2, 8};
    int n = 5;

    quickSort(arr, 0, n - 1);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
