#include<iostream>
using namespace std;
int main()
{
    int first = 8;
    int second = 11;
    int *third = &second; 
    first = *third;
    *third = *third + 2;
    cout  << first << "  " << second << endl;


return 0;
}
/*

    f = 8      s = 11
               ^
               T ---- ( Condition : f = T )
                        Now f becomes 11 from 8

    f = 11 
    After : s => T = T + 2
                 T = 13
    s = 13

output : 11 13



*/