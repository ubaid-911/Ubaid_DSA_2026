#include<iostream>
using namespace std;
int main()
{

   
for(int i=4; i>=1; i--) {
     char alphabet = 'A'+i-1;
    for(int j=i; j<=4; j++) {
        cout << alphabet++;
    }
    cout << endl;
}
return 0;
}
/*
D
CD
BCD
ABCD
*/  