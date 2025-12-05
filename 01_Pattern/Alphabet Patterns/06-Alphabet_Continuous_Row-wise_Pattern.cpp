#include<iostream>
using namespace std;
int main()
{
    
    for(int i=1; i<=3; i++) {
        char alphabet = 'A';
        for(int j=1; j<=3; j++) {
            cout << alphabet++;
        }
        cout<< endl;
    }


return 0;
}

/*
ABC
ABC
ABC

*/
