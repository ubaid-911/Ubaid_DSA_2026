#include <iostream>
using namespace std;

int main()
{

    int arr[]={5,3,1,4,2};
    int n=5;

    for(int i=0; i<n-1; i++) {
        for( int j=0; j<n-1; j++) {
            if(arr[j] > arr[j+1]) {
                swap(arr[j] , arr[j+1]);
            }
        }
    }
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    } 

return 0;
}
/*

here

i = 0 ---> i < 4
j = 0 ---> j < 4
                        

1st Pass (i = 0):
                  j = 0: 5 > 3 → swap → {3, 5, 1, 4, 2}

                  j = 1: 5 > 1 → swap → {3, 1, 5, 4, 2}

                  j = 2: 5 > 4 → swap → {3, 1, 4, 5, 2}

                  j = 3: 5 > 2 → swap → {3, 1, 4, 2, 5} ---- (largest element (5) goes to end)

 2nd Pass (i = 1):
                  j = 0: 3 > 1 → swap → {1, 3, 4, 2, 5}

                  j = 1: 3 < 4 → no swap

                  j = 2: 4 > 2 → swap → {1, 3, 2, 4, 5}

                  j = 3: 4 < 5 → no swap

 3rd Pass (i = 2):
                  j = 0: 1 < 3 → no swap

                  j = 1: 3 > 2 → swap → {1, 2, 3, 4, 5}

                  j = 2: 3 < 4 → no swap

                  j = 3: 4 < 5 → no swap

 4th Pass (i = 3):
                  j = 0: 1 < 2 → no swap

                  j = 1: 2 < 3 → no swap

                  j = 2: 3 < 4 → no swap

                  j = 3: 4 < 5 → no swap



*/