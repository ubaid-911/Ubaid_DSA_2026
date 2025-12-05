#include <iostream>
using namespace std;

int main() {
    int a = 42;

    int *p1 = &a;   // p1 points to a
    int *p2 = p1;   // p2 copies the address from p1

    cout << "a: " << a << endl;
    cout << "p1 points to: " << *p1 << endl;
    cout << "p2 points to: " << *p2 << endl;

    *p2 = 99;   // changing value using p2

    cout << "After change:" << endl;
    cout << "a: " << a << endl;
    cout << "p1 points to: " << *p1 << endl;
    cout << "p2 points to: " << *p2 << endl;

    return 0;
}
