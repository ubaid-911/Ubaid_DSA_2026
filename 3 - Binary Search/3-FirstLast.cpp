#include <iostream>
using namespace std;

// Function to find the first occurrence
int findFirst(int arr[], int n, int key) {
    int start = 0, end = n - 1;
    int result = -1;

    while (start <= end) {
        int mid = (start + end) / 2;

        if (arr[mid] == key) {
            result = mid;
            end = mid - 1; // search in left part
        }
        else if (arr[mid] < key) {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }

    return result;
}

// Function to find the last occurrence
int findLast(int arr[], int n, int key) {
    int start = 0, end = n - 1;
    int result = -1;

    while (start <= end) {
        int mid = (start + end) / 2;

        if (arr[mid] == key) {
            result = mid;
            start = mid + 1; // search in right part
        }
        else if (arr[mid] < key) {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }

    return result;
}

int main() {

    int arr[] = {1, 2, 2, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 2;

    int first = findFirst(arr, n, key);
    int last = findLast(arr, n, key);

    if (first != -1 && last != -1) {
        cout << "First occurrence at index: " << first << endl;
        cout << "Last occurrence at index: " << last << endl;
    } else {
        cout << "Element not found in array." << endl;
    } 

    return 0;
}
