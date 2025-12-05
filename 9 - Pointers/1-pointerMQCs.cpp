#include<iostream>
using namespace std;
int main()
{

    int first = 8;
    int second = 18;
    int *ptr = &second;
    *ptr = 9;
    cout  << first << " " << second << endl;   

return 0;
}

/*

f = 8    s = 18
          |
          p (p=&s)
          p = 9
          so , s = 9

output : f = 8 and s = 9 


*/