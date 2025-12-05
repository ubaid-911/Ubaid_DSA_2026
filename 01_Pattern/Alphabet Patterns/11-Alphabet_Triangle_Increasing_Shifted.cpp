#include<iostream>
using namespace std;
int main()
{

  
    for(int i=0; i<=5; i++) {
      char alphabet = 'A'+i;    
        for(int j=0; j<=i; j++) {
            cout<<alphabet++;
        }
        alphabet;
        cout<< endl;
    }

return 0;
}
/*
A
BC
CDE
DEFG
EFGHI
FGHIJK
*/