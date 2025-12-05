#include <iostream>
using namespace std;
int main()
{
//Half simple Lower Triangle

      for(int i=5; i>=1; i--) {
        for(int j = i; j>0; j--) {

            cout <<"* ";
        }
        cout << endl;
    }
    return 0;
}
 /*
    Outer loop: i = 5 to 1 (decreasing)
    Inner loop: j = i to 1 (decreasing)

    First iteration: i = 5
        j = 5 (prints *)
        j = 4 (prints *)
        j = 3 (prints *)
        j = 2 (prints *)
        j = 1 (prints *)
        j = 0 → condition not matching, stop

    Second iteration: i = 4
        j = 4 (prints *)
        j = 3 (prints *)
        j = 2 (prints *)
        j = 1 (prints *)
        j = 0 → condition not matching, stop

    Third iteration: i = 3
        j = 3 (prints *)
        j = 2 (prints *)
        j = 1 (prints *)
        j = 0 → condition not matching, stop

    Fourth iteration: i = 2
        j = 2 (prints *)
        j = 1 (prints *)
        j = 0 → condition not matching, stop

    Fifth iteration: i = 1
        j = 1 (prints *)
        j = 0 → condition not matching, stop

    i = 0 → condition i >= 1 not matching, end loop
//be passionate
    Final Output:
    *****
    ****
    ***
    **
    *
*/