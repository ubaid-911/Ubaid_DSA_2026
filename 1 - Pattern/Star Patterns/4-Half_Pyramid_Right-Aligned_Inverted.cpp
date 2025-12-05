#include<iostream>
using namespace std;
int main()
{
    //Half simple left Lower Triangle

    int i;
    
    for(int i=5; i>=1; i--) {
        for (int k = 5-i; k>0; k--) {
            cout << " ";
        }
        for(int j = i; j>0; j--) {
            cout << "*";
        }
        cout << endl;
    }

return 0;
}
  /*
    Outer loop: i = 5 to 1 (decreasing → rows)

    For each row:
      - Print (5 - i) spaces → to right-align the stars
      - Print i stars → decreasing stars each line

--------------------------------------------------
First iteration: i = 5
    Spaces: k = 0 → no space
    Stars:  j = 5 to 1 → print *****
    Output: *****

Second iteration: i = 4
    Spaces: k = 1 → print " "
    Stars:  j = 4 to 1 → print ****
    Output:  ****

Third iteration: i = 3
    Spaces: k = 2 → print "  "
    Stars:  j = 3 to 1 → print ***
    Output:   ***

Fourth iteration: i = 2
    Spaces: k = 3 → print "   "
    Stars:  j = 2 to 1 → print **
    Output:    **

Fifth iteration: i = 1
    Spaces: k = 4 → print "    "
    Stars:  j = 1 → print *
    Output:     *

i = 0 → condition fails, end

Final Output:
*****
 ****
  ***
   **
    *
*/