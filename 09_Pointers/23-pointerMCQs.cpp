#include<iostream>
using namespace std;
int main()
{

        int first = 100;
        int *p = &first;
        int **q = &p;
        int second = ++(**q);
        int *r = *q;
        ++(*r);
        cout << first << " " << second << endl; 
    

return 0;
}
/*

        f = 100
        ^
        p
        ^
        q   -- (condition => ++(**q) )

        f <-- *p <-- **q
        100    +      +
        f = 101 = **q

so , r = q --(condition => ++(*r) )

        f <-- *p <-- **r
        101    +      +
        _________
       [ f = 102 ]
        `````````

we know that ,  second = ++(**q)
                second = 101

output : 102   101


*/