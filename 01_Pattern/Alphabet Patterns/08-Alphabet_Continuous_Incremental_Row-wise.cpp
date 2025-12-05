#include<iostream>
using namespace std;
int main()
{

    for(int i=0; i<=2; i++) {
            char alphabet = 'A'+i;
        for(int j=0; j<=2; j++) {
            cout << alphabet++;
        
        }
        cout<< endl;
    }


return 0;
}
/*
ABC
BCD
CDE

*/
