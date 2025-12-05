/*
✅ What is Selection Sort?
Selection Sort is a simple sorting algorithm that works by:

Finding the smallest (or largest) element from the unsorted part of the array.

Swapping it with the element at the beginning.

Repeating this process for the rest of the array.

*/

#include <iostream>
using namespace std;

int main() {
    int arr[] = {5, 3, 8, 1, 4};
    int n = 5;

    for(int i = 0; i < n - 1; i++) {
        int min = i;
        for(int j = i + 1; j < n; j++) {
            if(arr[j] < arr[min])
                min = j;
        }
        swap(arr[i], arr[min]);
    }

    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
/*
here

arr[]={5, 3, 8, 1, 4}
i=0 --> i<n-1
j=i+1 ---> j<n
n = 5

first iteration : i = 0   ---->   i < 4
                  let min = i --> 0
                  j = i+1 --> 0 +1 = 1
    j = 1 --> arr[1] < arr[0] == 3 < 5 --> true
    j = 2 --> arr[2] < arr[1] == 8 < 3 --> false
    j = 3 --> arr[3] < arr[1] == 1 < 3 --> true
    j = 4 --> arr[4] < arr[3] == 4 < 1 --> false
 
    swap(arr[0], arr[3])
    Array: (1, 3, 8, 5, 4)

second iteration : i = 1   ---->   i < 4
                  let min = i --> 0
                  j = i+1 --> 1 +1 = 2
    j = 2 --> arr[2] < arr[1] == 8 < 3 --> false
    j = 3 --> arr[3] < arr[1] == 5 < 3 --> false
    j = 4 --> arr[4] < arr[1] == 4 < 3 --> false
 
   no  swap(arr[0], arr[3])
    Array: (1, 3, 8, 5, 4)

third iteration : i = 2   ---->   i < 4
                  let min = i --> 0
                  j = i+1 --> 2 +1 = 3
    j = 3 --> arr[3] < arr[2] == 5 < 8 --> true
    j = 4 --> arr[4] < arr[3] == 4 < 5 --> true
 
    swap(arr[2], arr[3])
    Array: (1, 3, 4, 8, 5)

fourth iteration : i = 3   ---->   i < 4
                  let min = i --> 0
                  j = i+1 --> 3 +1 = 4
    j = 4 --> arr[4] < arr[3] == 5 < 8 --> true
 
    swap(arr[4], arr[3])
    Array: (1, 3, 4, 5, 8)

    Final sorted array: 1 3 4 5 8
*/