#include<iostream>
using namespace std;
int main()
{
    int first = 8;
    int *p = &first;
    cout << (*p)++ << " ";
    cout << first << endl;

return 0;
}

/*

   f = 8
   ^
   p     --- (*p)++ ::  (*p) --> firt the value of p is  printed that is 8
                        ++  ---> After printing then it will increament that is 9

output : 8 9


*/