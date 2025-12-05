#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of matrix (n x n): ";
    cin >> n;

    // 2D Dynamic Array Allocation
    int **arr = new int*[n];
    for(int i=0; i<n; i++) {
        arr[i] = new int[n];
    }

    cout << "Enter elements in sorted row-major order: \n";
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            cin >> arr[i][j];
        }
    }

    cout << "Matrix is:\n";
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    int key;
    cout << "Enter element to search: ";
    cin >> key;

    // Binary Search in 2D (treat as 1D)
    int start = 0, end = n*n - 1;
    bool found = false;

    while(start <= end) {
        int mid = (start + end) / 2;

        int row = mid / n;  // convert mid to row index
        int col = mid % n;  // convert mid to col index

        if(arr[row][col] == key) {
            cout << "Found at position: (" << row << "," << col << ")" << endl;
            found = true;
            break;
        }
        if(arr[row][col] < key) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }

    if(!found) {
        cout << "Element not found." << endl;
    }

    // Free memory
    for(int i=0; i<n; i++) {
        delete [] arr[i];
    }
    delete [] arr;

    return 0;
}

/*













*/