#include <iostream>
using namespace std;

void printArray( int arr[] , int n) {

    for( int i=0; i<n; i++) {
        cout << arr[i] << " ";

    }cout <<endl;
}


void swapAlternate( int arr[] , int size) {
    
    for( int i=0; i<size; i+=2) {
        if(i+1 < size) {
            swap(arr[i] , arr[i+1]);

        }
    }
}

                                                                                                                                          
int main()
{
    int even[6]= {1,2,3,4,5,6};
    int odd[4]={1,2,3,4};

    swapAlternate(even , 6);
    printArray(even , 6);

    cout << endl;

    swapAlternate(odd , 4);
    printArray(odd , 4);

return 0;
}
/*

Iteration 1:

i = 0

Check: i+1 < n → 1 < 5 → true

Before swap: arr = {1, 2, 3, 4, 5}

Operation: swap arr[0] and arr[1] → swap 1 and 2

After swap: arr = {2, 1, 3, 4, 5}

Iteration 2:

i = 2

Check: i+1 < n → 3 < 5 → true

Before swap: arr = {2, 1, 3, 4, 5}

Operation: swap arr[2] and arr[3] → swap 3 and 4

After swap: arr = {2, 1, 4, 3, 5}

Iteration 3:

i = 4

Check: i+1 < n → 5 < 5 → false

No swap (last element has no pair)

Array stays: arr = {2, 1, 4, 3, 5}





























*/
