/*
        # REMEMBER #


|| Rows nikalne ka formula :

--( int rows = sizeof(arr) / sizeof(arr[0]); )---

i) sizeof(arr) = pura array ka size (all elements).

ii) sizeof(arr[0]) = ek row ka size.

---> Divide karoge toh kitni rows hain pata chal jayega.

````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````

|| Columns nikalne ka formula :

--(int cols = sizeof(arr[0]) / sizeof(arr[0][0]); )---

i) sizeof(arr[0]) = ek row ka size.

ii) sizeof(arr[0][0]) = ek element ka size.

----> Divide karoge toh row mein kitne columns hain wo mil jaata hai.

*/

#include <iostream>
using namespace std;

int main() {
    int arr[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    int rows = sizeof(arr) / sizeof(arr[0]);      // total size ÷ one row size
    int cols = sizeof(arr[0]) / sizeof(arr[0][0]); // one row size ÷ one element size

    cout << "Rows = " << rows << endl;
    cout << "Cols = " << cols << endl;

    return 0;
}
