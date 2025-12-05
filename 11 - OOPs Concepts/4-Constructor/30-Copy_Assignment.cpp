#include <iostream>
using namespace std;

class Demo {
public:
    int x;

    // Parameterized constructor
    Demo(int value) {
        x = value;
    }

    // Copy Assignment Operator
    Demo& operator=(const Demo &other) {
        x = other.x;   // simply copy value
        return *this;
    }
};

int main() {
    Demo a(10);
    Demo b(20);

    cout << "Before assignment:" << endl;
    cout << "a = " << a.x << endl;
    cout << "b = " << b.x << endl;

    b = a;  // copy assignment happens here

    cout << "\nAfter assignment:" << endl;
    cout << "a = " << a.x << endl;
    cout << "b = " << b.x << endl;

    return 0;
}
