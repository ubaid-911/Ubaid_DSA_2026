#include<iostream>
using namespace std;
int main()
{

      int x=1;

    for(int i=1; i<=5; i++) {
        for(int j=1; j<=i; j++) {
            cout << i+j-1;
        }
        cout << endl;
    }


return 0;
}
/*
1
23
345
4567
56789
*/