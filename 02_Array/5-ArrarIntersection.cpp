/*

## Array Intersection ##

--> Intersection means finding the common elements between two arrays.

Example:
    arr1 = 1 2 3 4 5
    arr2 = 3 4 5 6 7
    Intersection = 3 4 5

1) Take two arrays as input.
2) Compare each element of arr1 with each element of arr2.
3) If both elements are equal, print it as part of intersection.

Note:22
    This simple method may print duplicates if they exist in both arrays.

*/

#include <iostream>
using namespace std;

void arrayIntersection(int arr1[], int size1, int arr2[], int size2) {

    cout << "Intersection: ";
    for (int i = 0; i < size1; i++) {
        for (int j = 0; j < size2; j++) {
            if (arr1[i] == arr2[j]) {
                cout << arr1[i] << " ";
            }
        }
    }
    cout << endl;
}

int main() {

    int arr1[5] = {1, 2, 3, 4, 5};
    int arr2[5] = {3, 4, 5, 6, 7};

    arrayIntersection(arr1, 5, arr2, 5);

    return 0;
}






