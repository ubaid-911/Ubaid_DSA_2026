#include<iostream>
using namespace std;
int main()
{

    float f = 12.5;
    float p = 21.5;
    float* ptr = &f;
    (*ptr)++;
    *ptr = p;
    cout << *ptr << " " << f << " " << p << endl;

return 0;
}
/*

    f = 12.5          p = 21.5
    ^
    *ptr --(condition => (*ptr)++ Increment of f )

Then,

    ( *p )
      |
    f = 13.5          p = 21.5

    (condition => *p = p so , f = p that is 21.5)

    f = 21.5          p =  21.5 

output : 21.5   21.5   21.5  

*/