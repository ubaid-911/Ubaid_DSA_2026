#include<iostream>
using namespace std;
int main()
{

    char alphabet = 'A';
    for(int i=1; i<=5; i++) {
        for(int j=1; j<=i; j++) {
            cout<<alphabet;
        }
        alphabet++;
        cout<< endl;
    }

return 0;
}
/*
A
BB
CCC
DDDD
EEEEE
*/