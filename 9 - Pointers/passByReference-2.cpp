/*

Pass by Reference 



*/
#include <iostream>
using namespace std;

void update(int &num) {
    num = num + 10;   // directly modifies the original variable
}

int main() {
    int x = 20;

    cout << "Before function: " << x << endl;

    update(x);  

    cout << "After function: " << x << endl;

    return 0;
}












//==>  When we give a function a variable, we don’t give it a copy — we give it the original variable’s address



















