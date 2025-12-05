#include<iostream>
using namespace std;
int main()
{
    int first = 110;
    int *p = &first;
    int **q = &p;
    int second = (**q)++ + 9;
    cout << first << " " << second << endl; 

return 0;
}
/*
    f = 110
    ^
    p
    ^
    q ---(condition => second = (**q)++ + 9 )

here,    (**q)++ 
         
        f <-- *p <-- **q
        110     +     +
       f = 111 = **q


back too our condition =>

                second = use the  current value of first + 9
                       =  110 + 9
                second = 119

output : 111    119



*/