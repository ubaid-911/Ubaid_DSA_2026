#include <iostream>
using namespace std;


int main()


{

    //Half simple Upper Triangle

    for(int i=1; i<=5; i++) {
        for(int j = 1; j<=i; j++) {

            cout <<"* ";
        }
        cout << endl;
    } 
       return 0;

}
    /*
    i = 1 to 5
    For each i, j = 1 to i

    First iteration: i = 1
        j = 1 (prints *)
        j = 2 → condition not matching, stop

    Second iteration: i = 2
        j = 1 (prints *)
        j = 2 (prints *)
        j = 3 → condition not matching, stop

    Third iteration: i = 3
        j = 1 (prints *)
        j = 2 (prints *)
        j = 3 (prints *)
        j = 4 → condition not matching, stop

    Fourth iteration: i = 4
        j = 1 (prints *)
        j = 2 (prints *)
        j = 3 (prints *)
        j = 4 (prints *)
        j = 5 → condition not matching, stop

    Fifth iteration: i = 5
        j = 1 (prints *)
        j = 2 (prints *)
        j = 3 (prints *)
        j = 4 (prints *)
        j = 5 (prints *)
        j = 6 → condition not matching, stop

    i = 6 → condition i <= 5 not matching, end loop

    Output:
    *
    **
    ***
    ****
    *****
*/

            
