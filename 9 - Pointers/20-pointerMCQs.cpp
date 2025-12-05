#include<iostream>
using namespace std;

void update(int *p){
        int a = 70;
        p = &a;
        *p = (*p) * (*p);
    }

int main(){
        int a = 70;
        update(&a);
        cout << a << endl;
    

return 0;
}
/*

void update =>

        a = 70
        ^
        p -- (Condition => *p = (*p) * (*p) )
                so , *p = 70 * 70
                     *p = 4900

int main =>

        a = 70
        ---(condition => print a )


        
output : 70

*/