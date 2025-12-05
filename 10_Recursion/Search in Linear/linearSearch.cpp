#include <iostream>
using namespace std;

bool linearSearch(int arr[], int n, int key) {
    // Base case: if array size becomes 0 → not found
    if (n == 0)
        return false;

    // Check current element
    if (arr[0] == key)
        return true;

    // Recursive call for remaining array
    return linearSearch(arr + 1, n - 1, key);
}

int main() {
    int arr[] = {3, 5, 2, 9, 7};
    int n = 5;
    int key = 9;

    if (linearSearch(arr, n, key))
        cout << "Element found\n";
    else
        cout << "Element not found\n";

    return 0;
}
