#include <iostream>
using namespace std;

// Parent Class 1
class Father {
public:
    void height() {
        cout << "Father: Tall height." << endl;
    }
};

// Parent Class 2
class Mother {
public:
    void color() {
        cout << "Mother: Fair skin color." << endl;
    }
};

// Child Class inheriting from both Father and Mother
class Child : public Father, public Mother {
public:
    void hobby() {
        cout << "Child: Loves to play football." << endl;
    }
};

int main() {
    Child kid;

    kid.height(); // From Father
    kid.color();  // From Mother
    kid.hobby();  // From Child

    return 0;
}
