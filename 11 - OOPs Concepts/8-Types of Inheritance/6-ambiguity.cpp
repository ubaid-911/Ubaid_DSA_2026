#include <iostream>
using namespace std;

class A {
public:
    void show() {
        cout << "This is show() from Class A" << endl;
    }
};

class B {
public:
    void show() {
        cout << "This is show() from Class B" << endl;
    }
};

class C : public A, public B {

};

int main() {
    C obj;

    // obj.show();    // ❌ ERROR: Ambiguity (which show?)

    obj.A::show();    // ✅ Class A function
    obj.B::show();    // ✅ Class B function

    return 0;
}
