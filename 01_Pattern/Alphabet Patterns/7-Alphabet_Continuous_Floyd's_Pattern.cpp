#include<iostream>
using namespace std;
int main()
{
    char alphabet = 'A';
    for(int i=1; i<=3; i++) {
        for(int j=1; j<=3; j++) {
            cout << alphabet++;
        }
        cout<< endl;
    }


return 0;
}
/*
ABC
DEF
GHI

*/