#include<iostream>
using namespace std;
int main()
{  
    int n;

    for(int i=5; i>=1; i--) {
        for(int k=5-i; k>0; k--) {
            cout << " ";
        }
        for(int j=1; j<=i; j++) {
            cout <<(5-i+1);
        }
        cout<< endl;
    }


return 0;
}
/*
Outer loop: i = 5 to 1 (decreasing)
→ Controls the rows.

First inner loop: k = 5 - i to 1
→ Prints leading spaces to shift numbers to the right.

Second inner loop: j = 1 to i
→ Prints the number: (5 - i + 1), i times.

-----------------------------------------------------
Iteration 1: i = 5
    k = 0 → no spaces
    j = 1 to 5 → print (5 - 5 + 1) = 1 five times
    Output: 11111

Iteration 2: i = 4
    k = 1 → print " "
    j = 1 to 4 → print (5 - 4 + 1) = 2 four times
    Output:  2222

Iteration 3: i = 3
    k = 2 → print "  "
    j = 1 to 3 → print 3 three times
    Output:   333

Iteration 4: i = 2
    k = 3 → print "   "
    j = 1 to 2 → print 4 two times
    Output:    44

Iteration 5: i = 1
    k = 4 → print "    "
    j = 1 → print 5
    Output:     5

Final Output:


11111
 2222
  333
   44
    5
*/
