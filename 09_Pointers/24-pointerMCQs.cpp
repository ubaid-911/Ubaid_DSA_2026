#include<iostream>
using namespace std;

 void increment(int **p){
        ++(**p);
    }

    int main(){
        int num = 110;
        int *ptr = &num;
        increment(&ptr);
        cout << num << endl;


return 0;
}
/*

int main 

        n = 110
        ^
        p  --( condition => function call )

void increment

        condition => ++(**p)

        n <-- **p
        110    ++

        n = 111

        
output : 111

*/