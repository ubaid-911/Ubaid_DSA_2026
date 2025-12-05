#include<iostream>
using namespace std;

void update(int *p){
        *p = (*p)  *  2;
    }

    int main(){
        int i = 10;
        update(&i);
        cout << i << endl;
   

return 0;
 }
/*

    i = 10
        ^
        p  --( so *p = 10)

void function runs => *p = (*p) * 2
                         =  10  *  2
                      *p =  20

    so , i = 20


output : 20

*/