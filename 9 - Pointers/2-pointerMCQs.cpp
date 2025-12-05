#include<iostream>
using namespace std;
int main()
{

    int first = 6;
    int *p = &first;
    int *q = p;
    (*q)++;
    cout << first  << endl;

return 0;
}
/*
   f = 6 
   ^
   p   q        --- (here q = p) too jo bhi q ki condition rahengi vo p k liye bhi rahegi
                --- (Condition of q = q++)
   p = f
   p++ = f++
   therefor f = 7  ---(print first)

output : 7


*/