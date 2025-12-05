#include<iostream>
using namespace std;
int main()
{
     for(int i=1; i<=5; i++) {
        for(int k=5-i; k>0; k--) {
            cout << " ";
        }
        for(int j=1; j<=i; j++ ) {
            cout << i;
        }
        cout<<endl;
     }


return 0;
}
/*
Outer loop: i = 1 to 5 (rows)

First inner loop (spaces): k = 5 - i to 1
→ Adds leading spaces to shift numbers to the right.

Second inner loop (numbers): j = 1 to i
→ Prints the current row number i, i times.

-----------------------------------------------------
Iteration 1: i = 1
    Spaces: k = 4 to 1 → print "    " (4 spaces)
    Numbers: j = 1 → print 1
    Output:     1

Iteration 2: i = 2
    Spaces: k = 3 to 1 → print "   "
    Numbers: j = 1,2 → print 2 2
    Output:    22

Iteration 3: i = 3
    Spaces: k = 2 to 1 → print "  "
    Numbers: j = 1,2,3 → print 3 3 3
    Output:   333

Iteration 4: i = 4
    Spaces: k = 1 → print " "
    Numbers: j = 1,2,3,4 → print 4 4 4 4
    Output:  4444

Iteration 5: i = 5
    Spaces: k = 0 → no spaces
    Numbers: j = 1,2,3,4,5 → print 5 5 5 5 5
    Output: 55555

Final Output:
    1
   22
  333
 4444
55555
*/
