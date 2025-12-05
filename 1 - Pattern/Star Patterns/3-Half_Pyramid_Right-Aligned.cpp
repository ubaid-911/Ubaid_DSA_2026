#include<iostream>
using namespace std;
int main()
{
     //Half simple left Upper Triangle
     
    int i;

    for(int i=1; i<=5; i++) {
        for(int k = 5-i; k>0; k--){ 
            cout << " ";
    }
    for(int j=1; j<=i; j++) {
        cout << "*" ;
    }
    cout << endl;
    }
return 0;
}
/*
    Outer loop: i = 0 to 5 (rows)

    For each row:
        - Print (5 - i) spaces → for right alignment
        - Print (i + 1) stars

--------------------------------------------------
First iteration: i = 0
    Spaces: k = 5 to 1 → print "     " (5 spaces)
    Stars:  j = 0 → print *
    Output:      *

Second iteration: i = 1
    Spaces: k = 4 to 1 → print "    " (4 spaces)
    Stars:  j = 0,1 → print **
    Output:     **

Third iteration: i = 2
    Spaces: k = 3 to 1 → print "   " (3 spaces)
    Stars:  j = 0,1,2 → print ***
    Output:    ***

Fourth iteration: i = 3
    Spaces: k = 2 to 1 → print "  " (2 spaces)
    Stars:  j = 0,1,2,3 → print ****
    Output:   ****

Fifth iteration: i = 4
    Spaces: k = 1 → print " " (1 space)
    Stars:  j = 0 to 4 → print *****
    Output:  *****

Sixth iteration: i = 5
    Spaces: none
    Stars:  j = 0 to 5 → print ******
    Output: ******

Final Output:
     *
    **
   ***
  ****
 *****
******
*/