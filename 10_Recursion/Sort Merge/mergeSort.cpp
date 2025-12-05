#include <iostream>
using namespace std;

void merge(int arr[], int s, int e) {
    int mid = s + (e - s) / 2;

    int len1 = mid - s + 1;
    int len2 = e - mid;

    int *first = new int[len1];
    int *second = new int[len2];

    // Copy values
    int mainIndex = s;
    for (int i = 0; i < len1; i++)
        first[i] = arr[mainIndex++];

    for (int i = 0; i < len2; i++)
        second[i] = arr[mainIndex++];

    // Merge two sorted arrays
    int index1 = 0, index2 = 0;
    mainIndex = s;

    while (index1 < len1 && index2 < len2) {
        if (first[index1] < second[index2]) {
            arr[mainIndex++] = first[index1++];
        } else {
            arr[mainIndex++] = second[index2++];
        }
    }

    while (index1 < len1)
        arr[mainIndex++] = first[index1++];

    while (index2 < len2)
        arr[mainIndex++] = second[index2++];

    delete[] first;
    delete[] second;
}

void mergeSort(int arr[], int s, int e) {
    // Base case
    if (s >= e)
        return;

    int mid = s + (e - s) / 2;

    // Recursively sort left part
    mergeSort(arr, s, mid);

    // Recursively sort right part
    mergeSort(arr, mid + 1, e);

    // Merge both halves
    merge(arr, s, e);
}

int main() {
    int arr[] = {5, 1, 4, 2, 8};
    int n = 5;

    mergeSort(arr, 0, n - 1);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
