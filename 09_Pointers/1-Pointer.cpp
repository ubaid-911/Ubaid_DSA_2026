/*
What is a Pointer?

--> A pointer is a variable that stores the memory address of another variable.

int a = 10;      // normal variable
int *p = &a;     // pointer stores address of a
&a → address of a

*p → value at the address


Printing Address and Value :
#include <iostream>
using namespace std;

int main() {
    int a = 5;
    int *p = &a;

    cout << "a: " << a << endl;      // 5
    cout << "&a: " << &a << endl;    // address of a
    cout << "p: " << p << endl;      // same as &a
    cout << "*p: " << *p << endl;    // value at address (5)
}

Changing Values with Pointers:
int a = 5;
int *p = &a;

*p = 20;   // change value at address
cout << a; // 20














*/
#include <iostream>
using namespace std;
int main()
{

    int num = 42;

    int *p = &num;
    cout << &p;

return 0;
}