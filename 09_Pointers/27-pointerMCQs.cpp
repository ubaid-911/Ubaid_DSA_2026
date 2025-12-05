#include<iostream>
using namespace std;

int main()
    {
        char arr[20];
        int i;
        for(i = 0; i < 10; i++) {
            *(arr + i) = 65 + i;
        }
        *(arr + i) = '\0';
        cout << arr;

        return 0;
}
/*


for(i = 0; i < 10; i++) { *(arr + i) = 65 + i; }


For i = 0: 65 -> 'A'

For i = 1: 66 -> 'B'

For i = 2: 67 -> 'C'

… continues till

For i = 9: 74 -> 'J'

So after the loop, the array contains:

arr = [ 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', ?, ?, … ]
*(arr + i) = '\0';

Now i = 10.

So arr[10] = '\0';
Adds a null character at the end, marking the end of the string.

cout << arr;

Prints the character array as a string until it sees '\0'.

That means it prints:

ABCDEFGHIJ



*/