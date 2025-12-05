#include<iostream>
using namespace std;
int main()
{
    int first = 10;
    int *p = &first;
    int **q = &p;
    int second = 20;
    *q = &second;
    (*p)++;
    cout << first << " " << second << endl;


return 0;
}
/*

    f = 10      s = 20
            ^
            p
            ^
            q   --- (condition => *q = s )
                        (*p)++

here 
            s <- *p <- **q

            s = 20 ---( after *p++ s = 21 )
            s = 21


output : 10   21

*/